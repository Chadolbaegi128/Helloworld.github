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
        cout << "managecode�� �޴� ������" << endl;

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
    Tiger tiger;   // ��ü�� ��������� �ڵ����� ȣ�� �Ǿ����� �Լ�
                // ������
    tiger.info();

    cout << endl;
    Tiger tiger2("1231", 1, 19, 200.5f);

    tiger2.info();


    cout << endl;
    Tiger tiger3("1234");

    tiger3.info();




    return 0;
}