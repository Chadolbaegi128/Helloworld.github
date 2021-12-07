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
        cout << "연산자 오버로딩 대입 연산자 호출" << "\n";
        cout << "\n";
        delete[]_arr; //기존 동적메모리 삭제->새로운 객체에 덮어씌워져서 기존 객체에 있던 주소값이
        //가리키는 동적메모리가 미아가 되지 않도록 삭제시킴

        _size = ref._size;
        _arr = new int[_size];

        for (int i = 0; i < _size; i++) {
            _arr[i] = ref._arr[i];
        }


        return *this;//this->해당 객체의 주소값이 반환됨
    }
};

int main() {

    DynamicArray array(10);
    DynamicArray array2(20);


    cout << "array 객체에 값을 넣고 출력" << endl;
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
    cout << "array2 객체에 값을 저장" << endl;
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

    //array3 = array = array2; // array2객체를 array에 대입

    array3.operator=(array.operator=(array2));

    cout << "array 객체의 값을 출력" << endl;
    cout << "\n";
    for (int i = 0; i < array.GetSize(); i++) {
        //cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << "\n";
    cout << "array3 객체의 값을 출력" << endl;
    cout << "\n";
    for (int i = 0; i < array3.GetSize(); i++) {
        //cout << "array3[" << i << "] = " << array3.GetIndex(i) << endl;
        cout << "array3[" << i << "] = " << array3[i] << endl;
    }
    cout << "\n";
    return 0;
}