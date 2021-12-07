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

    int& operator[](int index) {
        return _arr[index];
    }

    DynamicArray& operator=(DynamicArray& ref) {
        cout << "������ �����ε� ���� ������ ȣ��" << "\n";
        cout << "\n";
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
        //array.SetIndex(i, i * 2);
        array[i] = i * 2;
    }

    for (int i = 0; i < array.GetSize(); i++) {
        //cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << "\n";
    cout << "array2 ��ü�� ���� ����" << endl;
    cout << "\n";
    for (int i = 0; i < array2.GetSize(); i++) {
        //array2.SetIndex(i, i * 2);
        array2[i] = i * 2;
    }

    for (int i = 0; i < array2.GetSize(); i++) {
        //cout << "array2[" << i << "] = " << array2.GetIndex(i) << endl;
        cout << "array2[" << i << "] = " << array2[i] << endl;
    }
    cout << "\n";
    DynamicArray array3(10);

    //array3 = array = array2; // array2��ü�� array�� ����

    array3.operator=(array.operator=(array2));

    cout << "array ��ü�� ���� ���" << endl;
    cout << "\n";
    for (int i = 0; i < array.GetSize(); i++) {
        //cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << "\n";
    cout << "array3 ��ü�� ���� ���" << endl;
    cout << "\n";
    for (int i = 0; i < array3.GetSize(); i++) {
        //cout << "array3[" << i << "] = " << array3.GetIndex(i) << endl;
        cout << "array3[" << i << "] = " << array3[i] << endl;
    }
    cout << "\n";
    return 0;
}