#include <iostream>
#include <string>

using namespace std;

class HeungMin {
public:
	int winningcompetition;
	string Nation;
	string position;
	string rating;

};

int main() {
	/*HeungMin h;
	h.ability = 86;
	h.team = "��Ʈ�� �ֽ���";
	h.position = "�߾� ���ݼ�";
	h.rating = "45��";

	cout << "���� �ɷ�: " << h.ability << "\n";
	cout << "�Ҽ���: " << h.team << "\n";
	cout << "������: " << h.position << "\n";
	cout << "���� ���� ���� ���: " << h.rating << "\n";*/

	HeungMin s;
	s.winningcompetition=800;
	s.Nation = "�ѱ�";
	s.position = "���ݼ�";
	s.rating = "45��";

	cout << "��� Ƚ��: " << s.winningcompetition << "\n";
	cout << "����: " << s.Nation << "\n";
	cout << "������: " << s.position << "\n";
	cout << "���� ���� ����: " << s.rating << "\n";


	return 0;
}