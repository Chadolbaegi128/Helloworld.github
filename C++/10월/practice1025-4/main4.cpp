#include <iostream>
#include <string>

using namespace std;

class Computer {//����Ʈ���� ��ǻ�� ���
public:
	string _game;
	string _youtube;

	Computer(string game, string youtube):_game(game), _youtube(youtube){}

	
	void info() {
		
		cout << "�������� ����: ";//�����̸� �Է�
		cin >> _game;
		cout<<"���� �������� ������ "<<_game<<" �Դϴ�." << "\n";
		cout << "���� ��Ʃ�����: ";//��ȣ,������ ����,�ҷ�
		cin >> _youtube;
		cout << "\n";
	}
};

class Phone {//����Ʈ���� ��ȭ�� ���
public:
	string _Call;
	int _Text;

	Phone(string call,int text)
		:_Call(call), _Text(text) {}

	
	void Texting(int text) {
		_Text = text;
	}

	void info() {
		cout << "\n";
		cout << "��ȭ����: ";//����, ������ ����, �ҷ�
		cin >> _Call;
		cout << "\n";
		cout << "���� �޼��� ����: ";
		cin >> _Text;
		cout << "\n";
	}
	
};

class SmartPhone : public Computer, public Phone {//���� ����� ����Ʈ�� ���� ����
public:
	int _app;

	SmartPhone(string game, string youtube, string call, int text,int app)
		:Computer(game,youtube), Phone(call, text), _app(app){}

	void info() {
		cout << "�ڰ����� A50����" << "\n"<<"\n";
		Computer::info();
		Phone::info();
		cout << "���� ���� ���� ���� ����: ";
		cin >> _app;
	}
};

void func(SmartPhone* pvalue) {
	pvalue->info();
}

int main() {
	SmartPhone device("", "", "", 0, 0);
	//����Ʈ�� ��ü�� ��ȭ�ɱ�/ ��ȭ �ޱ�, �����ϱ�, �޼��� ������

	//����
	//������ ���� �������� ���ü�� ���߻���ؼ� ��ü�� �����ϰ�
	//�۵����� ������.

	func(&device);

	return 0;
}