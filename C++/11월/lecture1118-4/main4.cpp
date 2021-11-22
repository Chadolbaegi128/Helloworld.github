#include <iostream>

using namespace std;

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {
		cout << "생성자" << "\n";
		_size = size;
		_arr = new int[size];
	}

	DynamicArray(DynamicArray& ref) {
		cout << "복사생성자" << "\n";
		_size = ref._size;

		_arr = new int[_size];

		for (int i = 0; i < _size; i++)
		{
			_arr[i] = ref._arr[i];
		}
	}

	~DynamicArray() {
		cout << "소멸자" << "\n";
		delete[] _arr;
	}


	int GetSize() {
		return _size;
	}

	void SetValue(int index, int value) {
		_arr[index] = value;
	}

	int GetIndex(int index){
		return _arr[index];}

};

int main() {

	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++)
	{
		array.SetValue(i, i * 3);

	}

	cout << "array 동적배열의 값" << "\n";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << "\n";
	}

	DynamicArray barray(array); //복사생성자

	cout << "barray 생성시 동적배열의 값" << "\n";
	for (int i = 0; i < barray.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << barray.GetIndex(i) << "\n";
	}

	//barray에 새로운 값을 대입
	cout << "barray에 새로운 값을 대입" << "\n";
	for (int i = 0; i < barray.GetSize(); i++)
	{
		barray.SetValue(i, i * 5);
	}

	cout << "\n";
	cout << "array객체 동적배열의 값" << "\n";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << "\n";
	}

	cout << "\n";
	cout << "barray객체 동적배열의 값" << "\n";
	for (int i = 0; i < barray.GetSize(); i++)
	{
		cout << "barray[" << i << "] = " << barray.GetIndex(i) << "\n";
	}

	return 0;
}