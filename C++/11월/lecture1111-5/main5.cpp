#include <iostream>
#include <string>

using namespace std;

class Son {//캡슐화->'Son'이라는 클래스형 데이터 타입 생성
private:
	int winningcompetition;//멤버변수
	string Nation;
	string Position;
	string Rating;

public:
	//Set,Get 함수
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

	h.SetNation("한국");
	cout << h.GetNation() << "\n";

	h.SetPosition("중앙공격수");
	cout << h.GetPosition() << "\n";

	h.SetRating("45위");
	cout << "피파 기준 순위: " << h.GetRating() << "\n";

	return 0;
}