#include <iostream>

using namespace std;

class DynamicArray {
private:
    int _size;
    int* _arr;

public:
    DynamicArray(int size) {
        _size = size;
        _arr = new int[_size];   // 동적배열
    }

    // 이동생성자
    DynamicArray(DynamicArray&& ref) {
        this->_arr = ref._arr;
        this->_size = ref._size;

        ref._arr = nullptr;
    }

    ~DynamicArray() {
        delete[] _arr;   // 동적배열 해제
    }

    int GetSize() {
        return _size;
    }

    // 오른쪽 값을 인자로 받는 
    // 대입연산자
    DynamicArray& operator=(DynamicArray&& rref) { // 오른쪽 값으로 대입이 일어나는 경우
        delete[] _arr;

        this->_arr = rref._arr;
        this->_size = rref._size;

        rref._arr = nullptr;

        return *this;
    }


    // 대입연산자
    DynamicArray& operator=(DynamicArray& ref) { // 왼쪽 값으로 대입이 일어나는 경
        delete[] _arr;

        _size = ref._size;
        _arr = new int[_size];

        for (int i = 0; i < _size; i++) {
            _arr[i] = ref._arr[i];
        }

        return *this;
    }

    int& operator[](int index) {
        return _arr[index];
    }


    DynamicArray operator+(DynamicArray& ref) {
        DynamicArray Temp(_size + ref._size);

        for (int i = 0; i < _size; i++) {
            Temp[i] = _arr[i];
        }

        for (int i = _size; i < _size + ref._size; i++) {
            Temp[i] = ref._arr[i - _size];
        }

        return Temp;
    }

    friend ostream& operator<<(ostream& out, DynamicArray& right);
};

ostream& operator<<(ostream& out, DynamicArray& right) {

    for (int i = 0; i < right._size; i++) {
        out << "array[" << i << "] = " << right[i] << endl;
    }

    return out;
}




int main() {
    int count = 0;
    DynamicArray array(10);

    for (int i = 0; i < array.GetSize(); i++) {
        array[i] = count++;
    }


    DynamicArray array2(20);
    for (int i = 0; i < array2.GetSize(); i++) {
        array2[i] = count++;
    }

    DynamicArray array3(10);

    array3 = array + array2;
    //array3 = array.operator+(array2);

    cout << array3;   // 여러분들이 만든 클래스가 연산자의 오른쪽에 놓이는 경우
                // 일반함수로 연산자 오버로딩을 해야 합니다.



    return 0;
}