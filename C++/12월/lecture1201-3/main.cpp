#include <iostream>

using namespace std;

class DynamicArray {
private:
    int _size;
    int* _arr;

public:
    DynamicArray(int size) {
        _size = size;
        _arr = new int[_size];
    }

    ~DynamicArray() {
        delete[] _arr;
    }

    int GetSize() {
        return _size;
    }

    int GetIndex(int index) {
        return _arr[index];
    }

    void SetIndex(int index, int value) {
        _arr[index] = value;
    }

    DynamicArray& operator=(DynamicArray& ref) {
        cout << "������ �����ε� ���� ������ ȣ��" << "\n";
        delete[]_arr; //���� �����޸� ����->���ο� ��ü�� ��������� ���� ��ü�� �ִ� �ּҰ���
        //����Ű�� �����޸𸮰� �̾ư� ���� �ʵ��� ������Ŵ

        _size = ref._size;
        _arr = new int[_size];

        for (int i = 0; i < _size; i++) {
            _arr[i] = ref._arr[i];
        }
        

        return *this;//this->�ش� ��ü�� �ּҰ��� ��ȯ��
    }
};

int main() {

    DynamicArray array(10);
    DynamicArray array2(20);

    cout << "array ��ü�� ���� �ְ� ���" << endl;
    cout << "\n";
    for (int i = 0; i < array.GetSize(); i++) {
        array.SetIndex(i, i * 2);
    }
    

    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
    }
    cout << "\n";

    cout << "array2 ��ü�� ���� ����" << "\n";
    cout << "\n";
    for (int i = 0; i < array2.GetSize(); i++) {
        //array.SetIndex(i, i * 2); // <= �̺κ��� array2�Դϴ�.
        array2.SetIndex(i, i * 2);
        // ������ �� ������ array�� �����迭�� int �� 10���� ���� �� �ִµ�
    // array2.GetSize()�� for���� �������ϱ�. 20���� ������.. 
    //array�� �����迭�� �Ҵ� ���� �뷮�� �ʰ��߽��ϴ�.
    }
    for (int i = 0; i < array2.GetSize(); i++) {
        cout << "array2[" << i << "] = " << array2.GetIndex(i) << endl;
        }
    cout << "\n";

    array = array2;//array2 ��ü�� array�� ����
   cout << "array ��ü�� ���� ���" << "\n";
   cout << "\n";
    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
    }

    return 0;
}