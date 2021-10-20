#include <iostream>

using namespace std;

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {//생성자
		cout << "생성자" << size << "크기의 동적배열을 할당" << "\n";
		_size = size;
		_arr = new int[_size];//동적배열 할당
	}

	~DynamicArray() {//소멸자
		//생성자에서 생성한 동적메모리를
		//소멸자에서 자동으로 삭제
		cout << "소멸자" << _size << "크기의 동적배열을 할당해제" << "\n";
		delete[] _arr; //동적배열 삭제(할당 해제)
	}

	DynamicArray(DynamicArray& ref) {//DynamicArray b객체의 복사생성자//DynamicArray a객체의 인자를 받는다
		cout << "복사 생성자" << "\n";
		_size = ref._size;//인자로 들어온 객체의 _size값을 가져온다.
		_arr = new int[_size]; //동적배열을 만든다.

		for (int i = 0; i < _size; i++) {
			_arr[i] = ref._arr[i];
		}
	}

	int GetSize() {
		return _size; //동적배열을 요소의 갯수를 반환.
	}

	//동적배열에 index위치에 value 값을 넣는다.
	void SetArray(int index, int value) {
		_arr[index] = value;
	}

	int GetArray(int index) {
		return _arr[index];
	}
};

int main() {
	DynamicArray a(10);
	cout << "a객체에 값을 입력" << "\n";
	for (int i = 0; i < a.GetSize(); i++) {
		a.SetArray(i, i * 2);
	}

	
	cout << "a객체에 값을 출력" << "\n";
	for (int i = 0; i < a.GetSize(); i++) {
		cout << "a[" << i << "] = " << a.GetArray(i) << "\n";
	}

	cout << "\n";
	//b객체를 생성(a객체를 인자로 받아서)
	DynamicArray b(a);//복사생성자 작동
	cout << "\n" << "\n";
	cout << "b객체에 값을 입력" << "\n";
	for(int i = 0; i < b.GetSize(); i++) {
		b.SetArray(i, i * 3);
	}

	//b객체의 값을 출력
	cout << "\n" << "\n";
	cout << "b객체에 값을 출력" << "\n";
	for (int i = 0; i < b.GetSize(); i++) {
		cout << "b[" << i << "] = " << b.GetArray(i) << "\n";
	}

	cout << "\n" << "\n";
	cout << "a객체에 값을 출력" << "\n";
	for (int i = 0; i < a.GetSize(); i++) {
		cout << "a[" << i << "] = " << a.GetArray(i) << "\n";
	}

	return 0;
}