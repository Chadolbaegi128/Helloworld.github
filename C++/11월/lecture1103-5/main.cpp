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
		delete[]_arr;//동적배열 해제
	}

	int GetSize() {
		return _size;
	}

	//대입연산자
	DynamicArray& operator=(DynamicArray& ref) {
		delete _arr;

		_size = ref._size;
		_arr = new int[_size];

		for (int i = 0; i < _size; i++) {
			_arr[i] = ref._arr[i];
		}

		return *this;
	}

	//참조형 변수를 반환하는 것-참조할 변수의 주소값 출력
	//일반 변수값으로 반환하는 것-참조할 변수의 변수값 출력
	int& operator[](int index) {
		return _arr[index];
	}
};

int main() {
	int arr[10];
	arr[0] = 2;

	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++) {
		//array.SetIndex(i,i);
		array[i] = i;
		//array.operator[](i)=i;
	}

	/*
  for (int i = 0; i < array.GetSize(); i++) {
	 //cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	 cout << "array[" << i << "] = " << array[i] << endl;
  }
  */

	DynamicArray array2(20);

	DynamicArray array3(10);

	array3 = array2 = array;
	//array3.operator=(array2.operator=(array));

	cout << "array " << endl;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "]= " << array[i] << endl;
	}
	cout << endl;
	cout << "array2 " << endl;
	array2[0] = 100;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array2[" << i << "]= " << array2[i] << endl;
	}

	cout << endl;
	cout << "array3 " << endl;
	array3[0] = 200;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array3[" << i << "]= " << array3[i] << endl;
	}

	return 0;
}