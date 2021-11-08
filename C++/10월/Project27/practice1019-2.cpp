#include <iostream>

using namespace std;

class DynamicArray {
private:
	int _size;
	int* _arr;

public:
	DynamicArray(int size) {//������
		cout << "������" << size << "ũ���� �����迭�� �Ҵ�" << "\n";
		_size = size;
		_arr = new int[_size];//�����迭 �Ҵ�
	}

	~DynamicArray() {//�Ҹ���
		//�����ڿ��� ������ �����޸𸮸�
		//�Ҹ��ڿ��� �ڵ����� ����
		cout << "�Ҹ���" << _size << "ũ���� �����迭�� �Ҵ�����" << "\n";
		delete[] _arr; //�����迭 ����(�Ҵ� ����)
	}

	DynamicArray(DynamicArray& ref) {//DynamicArray b��ü�� ���������//DynamicArray a��ü�� ���ڸ� �޴´�
		cout << "���� ������" << "\n";
		_size = ref._size;//���ڷ� ���� ��ü�� _size���� �����´�.
		_arr = new int[_size]; //�����迭�� �����.

		for (int i = 0; i < _size; i++) {
			_arr[i] = ref._arr[i];
		}
	}

	int GetSize() {
		return _size; //�����迭�� ����� ������ ��ȯ.
	}

	//�����迭�� index��ġ�� value ���� �ִ´�.
	void SetArray(int index, int value) {
		_arr[index] = value;
	}

	int GetArray(int index) {
		return _arr[index];
	}
};

int main() {
	DynamicArray a(10);
	cout << "a��ü�� ���� �Է�" << "\n";
	for (int i = 0; i < a.GetSize(); i++) {
		a.SetArray(i, i * 2);
	}

	
	cout << "a��ü�� ���� ���" << "\n";
	for (int i = 0; i < a.GetSize(); i++) {
		cout << "a[" << i << "] = " << a.GetArray(i) << "\n";
	}

	cout << "\n";
	//b��ü�� ����(a��ü�� ���ڷ� �޾Ƽ�)
	DynamicArray b(a);//��������� �۵�
	cout << "\n" << "\n";
	cout << "b��ü�� ���� �Է�" << "\n";
	for(int i = 0; i < b.GetSize(); i++) {
		b.SetArray(i, i * 3);
	}

	//b��ü�� ���� ���
	cout << "\n" << "\n";
	cout << "b��ü�� ���� ���" << "\n";
	for (int i = 0; i < b.GetSize(); i++) {
		cout << "b[" << i << "] = " << b.GetArray(i) << "\n";
	}

	cout << "\n" << "\n";
	cout << "a��ü�� ���� ���" << "\n";
	for (int i = 0; i < a.GetSize(); i++) {
		cout << "a[" << i << "] = " << a.GetArray(i) << "\n";
	}

	return 0;
}