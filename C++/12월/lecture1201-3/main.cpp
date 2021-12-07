#include <iostream>

using namespace std;

class DynamicArray {
private:
    int _size;
    int* _arr;

public:
    DynamicArray(int size) {
        _size = size;
        _arr = new int[_size];
    }

    ~DynamicArray() {
        delete[] _arr;
    }

    int GetSize() {
        return _size;
    }

    int GetIndex(int index) {
        return _arr[index];
    }

    void SetIndex(int index, int value) {
        _arr[index] = value;
    }

    DynamicArray& operator=(DynamicArray& ref) {
        cout << "연산자 오버로딩 대입 연산자 호출" << "\n";
        delete[]_arr; //기존 동적메모리 삭제->새로운 객체에 덮어씌워져서 기존 객체에 있던 주소값이
        //가리키는 동적메모리가 미아가 되지 않도록 삭제시킴

        _size = ref._size;
        _arr = new int[_size];

        for (int i = 0; i < _size; i++) {
            _arr[i] = ref._arr[i];
        }
        

        return *this;//this->해당 객체의 주소값이 반환됨
    }
};

int main() {

    DynamicArray array(10);
    DynamicArray array2(20);

    cout << "array 객체에 값을 넣고 출력" << endl;
    cout << "\n";
    for (int i = 0; i < array.GetSize(); i++) {
        array.SetIndex(i, i * 2);
    }
    

    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
    }
    cout << "\n";

    cout << "array2 객체에 값을 저장" << "\n";
    cout << "\n";
    for (int i = 0; i < array2.GetSize(); i++) {
        //array.SetIndex(i, i * 2); // <= 이부분이 array2입니다.
        array2.SetIndex(i, i * 2);
        // 오류가 난 이유는 array는 동적배열이 int 값 10개를 넣을 수 있는데
    // array2.GetSize()로 for문을 돌렸으니까. 20개가 들어가겠죠.. 
    //array의 동적배열을 할당 받은 용량을 초과했습니다.
    }
    for (int i = 0; i < array2.GetSize(); i++) {
        cout << "array2[" << i << "] = " << array2.GetIndex(i) << endl;
        }
    cout << "\n";

    array = array2;//array2 객체를 array에 대입
   cout << "array 객체의 값을 출력" << "\n";
   cout << "\n";
    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
    }

    return 0;
}