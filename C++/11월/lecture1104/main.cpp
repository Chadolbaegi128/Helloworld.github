#include <iostream>

using namespace std;

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {
		_size = size;
		_arr = new int[_size]; // �����迭
	}

	//�̵�������
	DynamicArray(DynamicArray&& ref) {
		this->_arr = ref._arr;
		this->_size = ref._size;

		ref._arr = nullptr;
	}

	~DynamicArray() {
		delete[] _arr; //�����迭 ����
	}

	int GetSize() {
		return _size;
	}

	//������ ���� ���ڷ� �޴�
	//���Կ�����
	DynamicArray& operator=(DynamicArray&& rref) {//������ ������ ������ �Ͼ�� ���
		delete[] _arr;

		this->_arr = rref._arr;
		this->_size = rref._size;

		rref._arr = nullptr;

		return *this;
	}

	int& operator[](int index) {
		return _arr[index];
	}

	/*
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
   */

	friend DynamicArray operator+(DynamicArray& left, DynamicArray& right);
};

//�Ϲ��Լ�
DynamicArray operator+(DynamicArray& left, DynamicArray& right) {
	DynamicArray Temp(left.GetSize() + right._size);

	for (int i = 0; i < left._size; i++) {
		Temp[i] = left[i];
	}

	for (int i = left._size; i < left._size + right._size; i++) {
		Temp[i] = right[i - left._size];
	}

	return Temp;
}

int main() {
	int count = 0;
	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++) {
		array[i] = count++;
	}

	DynamicArray array2(20);
;	for(int i = 0; i < array2.GetSize(); i++) {
		array2[i] = count++;
	}

	DynamicArray array3(10);

	array3 = array + array2;
	//array3=array.operator+(array2);

	for (int i = 0; i < array3.GetSize(); i++) {
		cout << "array3[" << i << "] = " << array3[i] << "\n";
	}

	return 0;
}