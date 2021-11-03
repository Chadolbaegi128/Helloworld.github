#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    int _type;   // 0: ��, 1: ����, 2: ��, 3: ����, 4: eagle, 
    string _name;
    float _height;   // Ű
    float _weight;   // ü��
    bool _sungbyul;   // ����

public:
    Animal() : _type(0), _name("��"), _height(0.0f), _weight(0.0f), _sungbyul(false) {}
    Animal(int type, string name, float height, float weight, bool sungbyul)
        : _type(type), _name(name), _height(height), _weight(weight), _sungbyul(sungbyul) {}

    void Speak() {
        switch (_type) {
        case 0:
            cout << "����" << endl;
            break;

        case 1:
            cout << "�ܲ�" << endl;
            break;

        case 2:
            cout << "������" << endl;
            break;

        case 3:
            cout << "����" << endl;
            break;
        }
    }

    void Run() {
        if (_type == 3) {
            cout << _name << "�� �����Ѵ�." << endl;
        }
        else {
            cout << _name << "�� �ڴ�" << endl;
        }
    }

    void Swim() {

    }

    void fly() {

    }

    void info() {
        switch (_type) {
        case 0:
            cout << "type: ��" << endl;
            break;

        case 1:
            cout << "type: ����" << endl;
            break;

        case 2:
            cout << "type: ��" << endl;
            break;

        case 3:
            cout << "type: ����" << endl;
            break;
        }
        cout << "name: " << _name << endl;
        cout << "height: " << _height << endl;
        cout << "weight: " << _weight << endl;
        cout << "sungbyul: " << _sungbyul << endl;
    }
};

int main() {

    Animal cow(0, "��", 160.0f, 200.0f, true);
    cow.Speak();
    cow.Run();
    cow.info();

    cout << endl;

    Animal pig(1, "����", 100.0f, 150.0f, true);
    pig.Speak();
    pig.Run();
    pig.info();

    cout << endl;

    Animal chicken(2, "��", 30.0f, 3.0f, false);
    chicken.Speak();
    chicken.Run();
    chicken.info();

    cout << endl;
    Animal dolphin(3, "����", 200.0f, 200.0f, false);
    dolphin.Speak();
    dolphin.Run();
    dolphin.info();


    return 0;
}