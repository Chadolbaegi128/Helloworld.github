#include <iostream>

using namespace std;

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {
		cout << "������" << "\n";
		_size = size;
		_arr = new int[size];
	}

	DynamicArray(DynamicArray& ref) {
		cout << "���������" << "\n";
		_size = ref._size;

		_arr = new int[_size];

		for (int i = 0; i < _size; i++)
		{
			_arr[i] = ref._arr[i];
		}
	}

	~DynamicArray() {
		cout << "�Ҹ���" << "\n";
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

	cout << "array �����迭�� ��" << "\n";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << "\n";
	}

	DynamicArray barray(array); //���������

	cout << "barray ������ �����迭�� ��" << "\n";
	for (int i = 0; i < barray.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << barray.GetIndex(i) << "\n";
	}

	//barray�� ���ο� ���� ����
	cout << "barray�� ���ο� ���� ����" << "\n";
	for (int i = 0; i < barray.GetSize(); i++)
	{
		barray.SetValue(i, i * 5);
	}

	cout << "\n";
	cout << "array��ü �����迭�� ��" << "\n";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << "\n";
	}

	cout << "\n";
	cout << "barray��ü �����迭�� ��" << "\n";
	for (int i = 0; i < barray.GetSize(); i++)
	{
		cout << "barray[" << i << "] = " << barray.GetIndex(i) << "\n";
	}

	return 0;
}