#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    //int _type;   // 0: ��, 1: ����, 2: ��, 3: ����, 4: eagle, 5: ���� etc.
    string _name;
    float _height;   // Ű
    float _weight;   // ü��
    bool _sungbyul;   // ����

public:
    Animal() : _name("����"), _height(0.0f), _weight(0.0f), _sungbyul(false) {}
    Animal(string name, float height, float weight, bool sungbyul)
        : _name(name), _height(height), _weight(weight), _sungbyul(sungbyul) {}

    void Speak() {
        cout << "����" << endl;
    }

    void Run() {
        cout << _name << "�� �ڴ�" << endl;
    }

    void info() {
        cout << "name: " << _name << endl;
        cout << "height: " << _height << endl;
        cout << "weight: " << _weight << endl;
        cout << "sungbyul: " << _sungbyul << endl;
    }
};

class Cow :public Animal {
public:
    Cow() : Animal("��", 180.0f, 200.0f, false) {}
    Cow(string name, float height, float weight, bool sungbyul)
        : Animal(name, height, weight, sungbyul) {}

    void Speak() {
        cout << "����" << endl;
    }

    void info() {
        cout << "��" << endl;
        Animal::info();
    }

};

class Pig : public Animal {
public:
    Pig() : Animal("����", 180.0f, 200.0f, false) {}
    Pig(string name, float height, float weight, bool sungbyul)
        : Animal(name, height, weight, sungbyul) {}

    void Speak() {
        cout << "�ܲ�" << endl;
    }

    void info() {
        cout << "����" << endl;
        Animal::info();
    }

};

class Chicken : public Animal {
public:
    Chicken() : Animal("��", 180.0f, 200.0f, false) {}
    Chicken(string name, float height, float weight, bool sungbyul)
        : Animal(name, height, weight, sungbyul) {}

    void Speak() {
        cout << "������" << endl;
    }

    void info() {
        cout << "��" << endl;
        Animal::info();
    }

};

class Dolphin : public Animal {
private:
    float _swimtime;   // ����ð�

public:
    Dolphin() : Animal("��", 180.0f, 200.0f, false), _swimtime(10.0f) {}
    Dolphin(string name, float height, float weight, bool sungbyul, float swimtime)
        : Animal(name, height, weight, sungbyul), _swimtime(swimtime) {}

    void Speak() {
        cout << "����" << endl;
    }

    void Swim() {
        cout << _name << "�� �����Ѵ�." << endl;
    }

    void info() {
        cout << "����" << endl;
        Animal::info();
        cout << "����ð�: " << _swimtime << endl;
    }


};

class Eagle : public Animal {
private:
    float _flytime;   // ����ð�

public:
    Eagle() : Animal("������", 180.0f, 200.0f, false) {}
    Eagle(string name, float height, float weight, bool sungbyul, float flytime)
        : Animal(name, height, weight, sungbyul), _flytime(flytime) {}

    void Speak() {
        cout << "����" << endl;
    }

    void fly() {
        cout << _name << "�� ����" << endl;
    }

    void info() {
        cout << "������" << endl;
        Animal::info();
        cout << "����ð�: " << _flytime << endl;
    }

};

int main() {

    Cow cow("��", 160.0f, 200.0f, true);
    cow.Speak();
    cow.Run();
    cow.info();

    cout << endl;

    Pig pig("����", 100.0f, 150.0f, true);
    pig.Speak();
    pig.Run();
    pig.info();

    cout << endl;

    Chicken chicken("��", 30.0f, 3.0f, false);
    chicken.Speak();
    chicken.Run();
    chicken.info();

    cout << endl;

    Dolphin dolphin("����", 200.0f, 200.0f, false, 10.0f);
    dolphin.Speak();
    dolphin.Run();
    dolphin.info();


    return 0;
}