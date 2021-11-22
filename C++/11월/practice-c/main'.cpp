#include <iostream>
#include <string>

using namespace std;

class Pig {
public:
	int _weight;//�������=�Ӽ�(attribute,property)
	int _height;
	string _name;

public:
	Pig() {//�⺻ ������(�ƹ� ���ڵ� ���� �ʴ� ������
		_name = "pig";
		cout << _name << " ��ü�� �⺻ ������ ȣ��Ǿ� ����" << "\n";
		_weight = 0;
		_height = 0;
	}

	Pig(string name, int weight, int height) {//���ڸ� �޴� ������
		cout << name << "��ü�� ���� 2���� �޴� ������ ȣ��Ǿ� ����" << "\n";
		_name = name;
		_weight = weight;
		_height = height;
	}

	Pig(string name, int weight) {//���ڸ� �޴� ������
		cout << name << "��ü�� ���� 1���� �޴� ������ ȣ��Ǿ� ����" << "\n";

		_name = name;
		_weight = weight;
		_height = 0;
	}

	~Pig() {
		cout << _name << "�Ҹ���" << "\n";
	}

	//Set,Get �Լ�
	int GetWeight() {//����Լ�
		return _weight;
	}

	void SetWeight(int value) {
		_weight = value;
	}

	int GetHeight() {
		return _height;
	}
};

int main() {
	Pig pig;//�⺻ �����ڰ� ���ٴ� ���� ���ڸ� �����ʰ� ��ü�� �����ϴ� ����
	//������� �ʰڴٴ� �ǹ̴�.
	{
		Pig pig2("pig2", 100, 200); //���� ����(���� ����, �ڵ� ����),���� ������ �߰�ȣ �ȿ�����
		//������ ��ģ��.
		{
			Pig pig3("pig3", 200, 300);
			cout << "--------------" << "\n";
		}

		cout << "-----------" << "\n";
	}

	cout << "\n";

	Pig pig4("pig4", 300);

	cout << "------------" << "\n";
	return 0;
}
