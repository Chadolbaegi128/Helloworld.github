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
		delete[] _arr;//동적배열 해제
	}

	int GetSize() {
		return _size;
	}

	void SetIndex(int index, int value) {
		_arr[index] = value;
	}

	int Getindex(int index) {
		return _arr[index];
	}

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

	for (int i = 0; i < array.GetSize(); i++) {
		//cout<<"array["<<i<<"]= "<< array.GetIndex(i)<<"\n";
		cout << "array[" << i << "]= " << array[i] << "\n";
	}

	return 0;
}