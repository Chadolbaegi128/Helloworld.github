#include <iostream>
#include <time.h>

using namespace std;

class Sort {
public:
	virtual bool operator()(int left, int right) = 0;
};

class Acending :public Sort {
	bool operator()(int left, int right) {
		if (left > right) {
			return true;
		}
		else {
			return false;
		}
	}
};

class Descending :public Sort {
	bool operator()(int left, int right) {
		if (left < right) {
			return true;
		}
		else {
			return false;
		}
	}
};

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {
		_size = size;
		_arr = new int[_size];
	}

	DynamicArray(DynamicArray&& ref) {
		cout << "이동생성자" << "\n";
		cout << "\n";
		_arr = ref._arr;
		ref._arr = NULL;
		_size = ref._size;
	}

	~DynamicArray() {
		delete[] _arr;
	}

	int GetSize() {
		return _size;
	}

	int& operator[](int index) {
		return _arr[index];
	}

	DynamicArray operator+(DynamicArray& ref) {
		cout << "operator+ 연산자" << "\n";
		cout << "\n";
		DynamicArray Temp(_size + ref._size);

		for (int i = 0; i < _size; i++) {
			Temp[i] = _arr[i];
		}

		for (int i = _size; i < _size + ref._size; i++) {
			Temp[i] = ref._arr[i - _size];
		}

		return Temp;
	}

	DynamicArray& operator=(DynamicArray& ref) {
		cout << "연산자 오버로딩 대입연산자 호출" << "\n";
		cout << "\n";
		delete[] _arr;//기존 동적메모리 삭제

		_size = ref._size;
		_arr = new int[_size];

		for (int i = 0; i < _size; i++) {
			_arr[i] = ref._arr[i];
		}

		return *this;
	}

	DynamicArray& operator=(DynamicArray&& ref) {
		cout << "임시 값 대입연산자" << "\n";
		cout << "\n";
		delete[] _arr;

 		_arr = ref._arr;
		ref._arr = NULL;

		_size = ref._size;

		return *this;
	}

	void Sort(Sort& functor) {
		for (int i = 0; i < _size - 1; i++) {
			for (int j = 0; j < _size - (i + 1); j++) {
				if (functor(_arr[j], _arr[j + 1])) {
					int temp = _arr[j];
					_arr[j] = _arr[j + 1];
					_arr[j + 1] = temp;
				}
			}
		}
	}
};



int main() {
	srand(time(NULL));

	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++) {
		array[i] = rand() % 100;
	}

	cout << "Sorting 전" << "\n";
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array[i] << "\n";
	}

	Descending sort1;

	array.Sort(sort1);
	cout << "\n";
	cout << "내림차순 Sorting 후" << "\n";
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array[i] << "\n";
	}

	Acending sort2;

	array.Sort(sort2);
	cout << "\n";
	cout << "오름차순 Sorting 후" << "\n";
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array[i] << "\n";
	}


	return 0;
}