#include <iostream>

using namespace std;

class Simple {
private:
	int m_x;
	


public:
	Simple(int id) {
		SetID(id);

	}
	
	void SetID(int id) {
		m_x = id;
	}
	
	int GetID()
	{
		return m_x;
	}
};

int main() {
	
	Simple A(1);//=Simple A(&A, 1);->Simple 클래스의 생성자 내부에서: this=&A
	Simple B(2);//=Simple B(&B, 1);->Simple 클래스의 생성자 내부에서: this=&B
	A.SetID(3);//=A.SetID(&A, 3);->멤버 함수 SetID 내부에서: this=&A
	B.SetID(4);//=B.SetID(&B, 1);->멤버 함수 SetID 내부에서: this=&B
	//this포인터는 항상 호출된 객체(인스턴스)를 가리킨다.
	//또한, this 포인터는 함수 매개 변수에 불과하므로 클래스에 메모리 사용량을 추가하지 않는다.
	//함수가 실행되는 동안에만 스택에 매개 변수가 쌓인다.(자동 변수)

	return 0;
}