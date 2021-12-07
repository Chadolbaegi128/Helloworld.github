#include <iostream>
#include <time.h>

using namespace std;

class Student {
private:
    int _age;
    int _grade;

public:
    Student() {}
    Student(int age, int grade)
        : _age(age), _grade(grade) {}

    int GetAge() {
        return _age;
    }

    int GetGrade() {
        return _grade;
    }

    void Init(int age, int grade) {
        _age = age;
        _grade = grade;
    }

    void info() {
        cout << "age = " << _age << endl;
        cout << "grade = " << _grade << endl << endl;
    }

};

class Sort {
public:
    virtual bool operator()(int left, int right) = 0;
    virtual bool operator()(Student& left, Student& right) = 0;
};


class Acending : public Sort {
public:
    bool operator()(int left, int right) {
        if (left > right) {
            return true;
        }
        else {
            return false;
        }
    }

    bool operator()(Student& left, Student& right) {
        if (left.GetAge() > right.GetAge()) {
            return true;
        }
        else {
            return false;
        }
    }
};

class Descending : public Sort {
public:
    bool operator()(int left, int right) {
        if (left < right) {
            return true;
        }
        else {
            return false;
        }
    }

    bool operator()(Student& left, Student& right) {
        if (left.GetAge() < right.GetAge()) {
            return true;
        }
        else {
            return false;
        }
    }

};


class DynamicArrayStudent {
private:
    int _size;
    Student* _arr;

public:
    DynamicArrayStudent(int size) {
        _size = size;
        _arr = new Student[_size];
    }


};

template <typename T>
class DynamicArray {
private:
    int _size;
    T* _arr;

public:
    DynamicArray(int size) {
        cout << "���ڸ� �޴� ������" << endl;
        _size = size;
        _arr = new T[_size];
    }

    DynamicArray(DynamicArray&& ref) {
        cout << "�̵� ������" << endl;
        _arr = ref._arr;
        ref._arr = NULL;
        _size = ref._size;
    }

    ~DynamicArray() {
        cout << "�Ҹ���" << endl;
        delete[] _arr;
    }

    int GetSize() {
        return _size;
    }

    T& operator[](int index) {

        return  _arr[index];
    }

    DynamicArray operator+(DynamicArray& ref) {
        cout << "operator+ ������" << endl;
        DynamicArray Temp(_size + ref._size);

        for (int i = 0; i < _size; i++) {
            Temp[i] = _arr[i];
        }

        for (int i = _size; i < _size + ref._size; i++) {
            Temp[i] = ref._arr[i - _size];
        }

        return Temp;
    }

    DynamicArray& operator=(DynamicArray& ref) {
        cout << "������ �����ε� ���� ������ ȣ��" << endl;
        delete[] _arr;   // ���� �����޸� ����

        _size = ref._size;
        _arr = new T[_size];

        for (int i = 0; i < _size; i++) {
            _arr[i] = ref._arr[i];
        }

        return *this;
    }

    DynamicArray& operator=(DynamicArray&& ref) {
        cout << "�ӽ� �� ���Կ�����" << endl;
        delete[] _arr;

        _arr = ref._arr;
        ref._arr = NULL;

        _size = ref._size;

        return *this;
    }


    void Sort(Sort& functor) { // �������
        for (int i = 0; i < _size - 1; i++) {
            for (int j = 0; j < _size - (i + 1); j++) {
                if (functor(_arr[j], _arr[j + 1])) {
                    T temp = _arr[j];
                    _arr[j] = _arr[j + 1];
                    _arr[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    srand(time(NULL));

    DynamicArray<int> array(10);

    for (int i = 0; i < array.GetSize(); i++) {
        array[i] = rand() % 100;   // ���� �߻� 
    }

    cout << "���� ��" << endl;
    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    Descending sort1;


    array.Sort(sort1);
    cout << endl;
    cout << "���� �������� �� " << endl;
    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }


    Acending sort2;


    array.Sort(sort2);
    cout << endl;
    cout << "���� ���� ���� �� " << endl;
    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }


    DynamicArray<float> floatArray(10);

    for (int i = 0; i < floatArray.GetSize(); i++) {
        floatArray[i] = 1.2f * i;
    }

    for (int i = 0; i < floatArray.GetSize(); i++) {
        cout << "floatArray[i] = " << floatArray[i] << endl;
    }

    cout << "Studnet ���" << endl;
    DynamicArray<Student> studentArray(10);

    for (int i = 0; i < floatArray.GetSize(); i++) {
        studentArray[i].Init(rand() % 10, rand() % 3 + 1);
    }

    studentArray.Sort(sort1);

    for (int i = 0; i < floatArray.GetSize(); i++) {
        studentArray[i].info();
    }



    return 0;
}