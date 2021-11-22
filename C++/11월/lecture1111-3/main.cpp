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
	h.team = "토트넘 핫스퍼";
	h.position = "중앙 공격수";
	h.rating = "45위";

	cout << "슈팅 능력: " << h.ability << "\n";
	cout << "소속팀: " << h.team << "\n";
	cout << "포지션: " << h.position << "\n";
	cout << "피파 기준 선수 등급: " << h.rating << "\n";*/

	HeungMin s;
	s.winningcompetition=800;
	s.Nation = "한국";
	s.position = "공격수";
	s.rating = "45위";

	cout << "우승 횟수: " << s.winningcompetition << "\n";
	cout << "국적: " << s.Nation << "\n";
	cout << "포지션: " << s.position << "\n";
	cout << "피파 기준 순위: " << s.rating << "\n";


	return 0;
}