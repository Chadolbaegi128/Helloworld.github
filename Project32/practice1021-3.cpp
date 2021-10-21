#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    //int _type;   // 0: ¼Ò, 1: µÅÁö, 2: ´ß, 3: µ¹°í·¡, 4: eagle, 5: °ø·æ etc.
    string _name;
    float _height;   // Å°
    float _weight;   // Ã¼Áß
    bool _sungbyul;   // ¼ºº°

public:
    Animal() : _name("µ¿¹°"), _height(0.0f), _weight(0.0f), _sungbyul(false) {}
    Animal(string name, float height, float weight, bool sungbyul)
        : _name(name), _height(height), _weight(weight), _sungbyul(sungbyul) {}

    void Speak() {
        cout << "µ¿¹°" << endl;
    }

    void Run() {
        cout << _name << "ÀÌ ¶Ú´Ù" << endl;
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
    Cow() : Animal("¼Ò", 180.0f, 200.0f, false) {}
    Cow(string name, float height, float weight, bool sungbyul)
        : Animal(name, height, weight, sungbyul) {}

    void Speak() {
        cout << "À½¸Å" << endl;
    }

    void info() {
        cout << "¼Ò" << endl;
        Animal::info();
    }

};

class Pig : public Animal {
public:
    Pig() : Animal("µÅÁö", 180.0f, 200.0f, false) {}
    Pig(string name, float height, float weight, bool sungbyul)
        : Animal(name, height, weight, sungbyul) {}

    void Speak() {
        cout << "²Ü²Ü" << endl;
    }

    void info() {
        cout << "µÅÁö" << endl;
        Animal::info();
    }

};

class Chicken : public Animal {
public:
    Chicken() : Animal("´ß", 180.0f, 200.0f, false) {}
    Chicken(string name, float height, float weight, bool sungbyul)
        : Animal(name, height, weight, sungbyul) {}

    void Speak() {
        cout << "²¿³¢¿À" << endl;
    }

    void info() {
        cout << "´ß" << endl;
        Animal::info();
    }

};

class Dolphin : public Animal {
private:
    float _swimtime;   // Àá¼ö½Ã°£

public:
    Dolphin() : Animal("¼Ò", 180.0f, 200.0f, false), _swimtime(10.0f) {}
    Dolphin(string name, float height, float weight, bool sungbyul, float swimtime)
        : Animal(name, height, weight, sungbyul), _swimtime(swimtime) {}

    void Speak() {
        cout << "³£³£" << endl;
    }

    void Swim() {
        cout << _name << "ÀÌ ¼ö¿µÇÑ´Ù." << endl;
    }

    void info() {
        cout << "µ¹°í·¡" << endl;
        Animal::info();
        cout << "Àá¼ö½Ã°£: " << _swimtime << endl;
    }


};

class Eagle : public Animal {
private:
    float _flytime;   // ºñÇà½Ã°£

public:
    Eagle() : Animal("µ¶¼ö¸®", 180.0f, 200.0f, false) {}
    Eagle(string name, float height, float weight, bool sungbyul, float flytime)
        : Animal(name, height, weight, sungbyul), _flytime(flytime) {}

    void Speak() {
        cout << "³¢¿À" << endl;
    }

    void fly() {
        cout << _name << "ÀÌ ³­´Ù" << endl;
    }

    void info() {
        cout << "µ¶¼ö¸®" << endl;
        Animal::info();
        cout << "ºñÇà½Ã°£: " << _flytime << endl;
    }

};

int main() {

    Cow cow("¼Ò", 160.0f, 200.0f, true);
    cow.Speak();
    cow.Run();
    cow.info();

    cout << endl;

    Pig pig("µÅÁö", 100.0f, 150.0f, true);
    pig.Speak();
    pig.Run();
    pig.info();

    cout << endl;

    Chicken chicken("´ß", 30.0f, 3.0f, false);
    chicken.Speak();
    chicken.Run();
    chicken.info();

    cout << endl;

    Dolphin dolphin("µ¹°í·¡", 200.0f, 200.0f, false, 10.0f);
    dolphin.Speak();
    dolphin.Run();
    dolphin.info();


    return 0;
}