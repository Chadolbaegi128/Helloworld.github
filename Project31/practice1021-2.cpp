#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    int _type;   // 0: ¼Ò, 1: µÅÁö, 2: ´ß, 3: µ¹°í·¡, 4: eagle, 
    string _name;
    float _height;   // Å°
    float _weight;   // Ã¼Áß
    bool _sungbyul;   // ¼ºº°

public:
    Animal() : _type(0), _name("¼Ò"), _height(0.0f), _weight(0.0f), _sungbyul(false) {}
    Animal(int type, string name, float height, float weight, bool sungbyul)
        : _type(type), _name(name), _height(height), _weight(weight), _sungbyul(sungbyul) {}

    void Speak() {
        switch (_type) {
        case 0:
            cout << "À½¸Å" << endl;
            break;

        case 1:
            cout << "²Ü²Ü" << endl;
            break;

        case 2:
            cout << "²¿³¢¿À" << endl;
            break;

        case 3:
            cout << "³£³£" << endl;
            break;
        }
    }

    void Run() {
        if (_type == 3) {
            cout << _name << "ÀÌ ¼ö¿µÇÑ´Ù." << endl;
        }
        else {
            cout << _name << "ÀÌ ¶Ú´Ù" << endl;
        }
    }

    void Swim() {

    }

    void fly() {

    }

    void info() {
        switch (_type) {
        case 0:
            cout << "type: ¼Ò" << endl;
            break;

        case 1:
            cout << "type: µÅÁö" << endl;
            break;

        case 2:
            cout << "type: ´ß" << endl;
            break;

        case 3:
            cout << "type: µ¹°í·¡" << endl;
            break;
        }
        cout << "name: " << _name << endl;
        cout << "height: " << _height << endl;
        cout << "weight: " << _weight << endl;
        cout << "sungbyul: " << _sungbyul << endl;
    }
};

int main() {

    Animal cow(0, "¼Ò", 160.0f, 200.0f, true);
    cow.Speak();
    cow.Run();
    cow.info();

    cout << endl;

    Animal pig(1, "µÅÁö", 100.0f, 150.0f, true);
    pig.Speak();
    pig.Run();
    pig.info();

    cout << endl;

    Animal chicken(2, "´ß", 30.0f, 3.0f, false);
    chicken.Speak();
    chicken.Run();
    chicken.info();

    cout << endl;
    Animal dolphin(3, "µ¹°í·¡", 200.0f, 200.0f, false);
    dolphin.Speak();
    dolphin.Run();
    dolphin.info();


    return 0;
}