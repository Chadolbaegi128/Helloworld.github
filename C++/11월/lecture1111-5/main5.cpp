#include <iostream>
#include <string>

using namespace std;

class Son {//ĸ��ȭ->'Son'�̶�� Ŭ������ ������ Ÿ�� ����
private:
	int winningcompetition;//�������
	string Nation;
	string Position;
	string Rating;

public:
	//Set,Get �Լ�
	void SetWinningCompetition(int value) {
		if (value > 1000) {
			winningcompetition = 1000;
		}
		else if (value < 500) {
			winningcompetition = 500;
		}
		else {
			winningcompetition = value;
		}

	}

	int GetWinningCompetition() {
		return winningcompetition;
	}

	void SetNation(string value) {
		Nation = value;
	}

	string GetNation() {
		return Nation;
	}

	void SetPosition(string value) {
		Position = value;
	}

	string GetPosition() {
		return Position;
	}

	void SetRating(string value) {
		Rating = value;
	}

	string GetRating() {
		return Rating;
	}
};

int main() {
	Son h;
	
	h.SetWinningCompetition(800);
	cout << h.GetWinningCompetition() << "\n";

	h.SetNation("�ѱ�");
	cout << h.GetNation() << "\n";

	h.SetPosition("�߾Ӱ��ݼ�");
	cout << h.GetPosition() << "\n";

	h.SetRating("45��");
	cout << "���� ���� ����: " << h.GetRating() << "\n";

	return 0;
}