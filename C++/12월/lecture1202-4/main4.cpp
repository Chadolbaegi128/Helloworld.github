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
		cout << "인자를 받는 생성자" << "\n";
		_size = size;
		_arr = new int[_size];
	}

	DynamicArray(DynamicArray&& ref) {
		cout<<"이동 생성자"
	}
};