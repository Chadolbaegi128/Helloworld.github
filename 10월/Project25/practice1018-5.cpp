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
	
	Simple A(1);//=Simple A(&A, 1);->Simple Ŭ������ ������ ���ο���: this=&A
	Simple B(2);//=Simple B(&B, 1);->Simple Ŭ������ ������ ���ο���: this=&B
	A.SetID(3);//=A.SetID(&A, 3);->��� �Լ� SetID ���ο���: this=&A
	B.SetID(4);//=B.SetID(&B, 1);->��� �Լ� SetID ���ο���: this=&B
	//this�����ʹ� �׻� ȣ��� ��ü(�ν��Ͻ�)�� ����Ų��.
	//����, this �����ʹ� �Լ� �Ű� ������ �Ұ��ϹǷ� Ŭ������ �޸� ��뷮�� �߰����� �ʴ´�.
	//�Լ��� ����Ǵ� ���ȿ��� ���ÿ� �Ű� ������ ���δ�.(�ڵ� ����)

	return 0;
}