#include <iostream>
#include <string>

using namespace std;

class Tiger {
private:
    string _managecode; // ������ȣ // ������� ��ü�� �Ӽ�
    int _sungbyul;   // ���� 0: ����, 1: ����.
    int _age;   // ����
    float _weight;   // ü��

public:

    Tiger() : _managecode("00000"), _sungbyul(0), _age(0), _weight(0)   // ������ �ʱ�ȭ ����Ʈ
    {   // ������(constructor), �⺻ ������
        cout << "�⺻ ������" << endl;
    }


    Tiger(string managecode, int sungbyul, int age, float weight)
        : _managecode(managecode), _sungbyul(sungbyul), _age(age), _weight(weight)
    {   // ���ڸ� �޴� ������
        cout << "���ڸ� �޴� ������" << endl;
    }

    Tiger(string managecode)
        : _managecode(managecode), _sungbyul(0), _age(0), _weight(0)
    {
        cout << _managecode << " ������" << endl;

    }

    ~Tiger() {   // �Ҹ��� (destructor)
        cout << _managecode << " �Ҹ���" << endl;
    }

    void Eat() {   // ����Լ� ��ü�� �ൿ
        cout << "ȣ���̰� �Դ´�." << endl;
    }

    void SetManageCode(string value) {
        _managecode = value;
    }

    void info() {   // ����Լ�
        cout << "������ȣ: " << _managecode << endl;
        cout << "����: " << _sungbyul << endl;
        cout << "����: " << _age << endl;
        cout << "ü��: " << _weight << endl;
    }
};


int main() {
    Tiger tiger("tiger");   // ��ü�� ��������� �ڵ����� ȣ�� �Ǿ����� �Լ�            // ������


    
    { cout << endl;
    Tiger tiger2("tiger2");   // ���ð�ü, �ڵ�����      
    }



    cout << endl;
    Tiger tiger3("tiger3");

    return 0;
}