#include <iostream>

using namespace std;

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {
		_size = size;
		_arr = new int[_size];//동적배열
	}
      

    ~DynamicArray() {
        delete[] _arr;   // 동적배열 해제
    }

    int GetSize() {
        return _size;
    }

    DynamicArray& operator=(DynamicArray&& rref) { // 오른쪽 값으로 대입이 일어나는 경우
        delete[] _arr;

        this->_arr = rref._arr;
        this->_size = rref._size;

        rref._arr = nullptr;

        return *this;
    }


    // 대입연산자
    DynamicArray& operator=(DynamicArray& ref) { // 왼쪽 값으로 대입이 일어나는 경우
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
        DynamicArray temp(_size + ref._size);

        for (int i = 0; i < _size; i++) {
            temp[i] = _arr[i];
        }

        for (int i = _size; i < _size + ref._size; i++) {
            temp[i] = ref._arr[i - _size];
        }

        return temp;
    }
};

int main() {
    int a = 100;

    int& refa = a; //왼쪽 값 참

    //int & refvalue = 1234;

    int&& rrefvalue = 1234; // 오른쪽 값 참조 


    a = 1234;

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

    for (int i = 0; i < array3.GetSize(); i++) {
        cout << "array3[" << i << "] = " << array3[i] << endl;
    }


    return 0;
}