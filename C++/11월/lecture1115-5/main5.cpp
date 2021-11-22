#include <iostream>

using namespace std;

class Monster {
private:   // ����������
    int _health;   // ����� (�������) ��ü�� �Ӽ�(attribute, property)
    int _attack;   // ���ݷ� (�������)
    int _defense;   // ���� (�������)

    int& _ref;   // ������ ����� �ִ°��
    const int MAX;// const type�� ����� �ִ� ���
    //������ ����� const type�� ������ ������ �ʱ�ȭ ����Ʈ
    //�� ó���� ���� ������ ������ �߻��Ѵ�.

public:
    Monster()
        :_ref(_health), MAX(100)
    {   // ������ (�⺻������)

    }

    // ������(���ڸ� �޴� ������)
    Monster(int health, int attack, int defense, int& ref, int max)
        : _health(health), _attack(attack), _defense(defense), _ref(ref), MAX(max)
    {
        //������ ����, ����� ����('const'+�ڷ���)�� �߰�ȣ�� �ƴ�
        //������ �ʱ�ȭ ����Ʈ�� �ۼ��ؾ� �Ѵ�.
    }

    ~Monster() {   // �Ҹ���

    }

    void Attack() {   // ����Լ� , ��ü�� �ൿ(action, behaviour)
        cout << "����" << endl;
    }

    void Run() {   // ����Լ�
        cout << "�ڴ�" << endl;
    }

    void info() {   // ����Լ�
        cout << "health: " << _health << endl;
        cout << "attack: " << _attack << endl;
        cout << "defense: " << _defense << endl;
        cout << "ref: " << _ref << endl;
        cout << "MAX: " << MAX << endl;
    }
};

int main() {
    int a = 200;

    Monster m(10, 20, 30, a, 200);//���ڸ� ���� ������ �۵�

    m.info();

    const int MAX = 200;//���� ������ �� ���� ����
    //������� ���.

    return 0;
}
