#include <iostream>

using namespace std;

int main() {

	//배열의 구조: 자료형+배열명(변수명과 비슷함)[배열 길이-숫자로 표시];
	int one_student_score;//int 타입 변수 1개 선언
	int student_scores[5];//int 타입 변수 5개의 배열을 선언(연이은 변수들)

	cout << sizeof(one_student_score) << "\n";
	cout << sizeof(student_scores) << "\n";

	one_student_score = 100;

	student_scores[0] = 100; // 첫번째 요소(first element)
	//※요소(element): 배열에 있는 각 변수를 뜻함. 요소에는 고유명이 없지만 
	//배열의 개별 요소에 접근하려면 배열명 옆에 하위 연산자('[]')를 넣고
	//하위 연산자 안에 '인덱스(index)'라는 매개 변수를 넣는다.
	//예를 들면 student_scores 배열의 첫번째 요소를 구할 때는
	//'student_scores[0]=100'라고 작성한다. 여기서 0을 작성한 이유는 0이 메모리 주소의 시작점이기 때문이다.
	//그래서 두번째 요소를 구할 때는 'student_scores[1]=20;'라고 작성하면 된다.
	//그리고 앞에서 선언한 배열의 마지막 요소값을 구할 때는 해당 배열 길이에서 1을 뺀 숫자를 넣으면 된다.
	//여기서는 'student_scores[4]=20;'가 마지막 요소의 값이라고 볼 수 있다.
	//*주의: 배열을 작성할 때는 마지막 요소의 인덱스 값을 처음 선언했을 때의 값을 넣으면 심각한 오류가 발생할 수 있다.
	student_scores[1] = 20; 
	student_scores[2] = 40;
	student_scores[3] = 50;
	// student_scores[5]=10; //5번째 요소(5th element)-마지막 요소로 사용되어선 안된다.

	cout << student_scores[0] << "\n";
	cout << student_scores[1] << "\n";
	cout << student_scores[2] << "\n";
	//cout << student_scores[5] << "\n";->마지막 요소로 사용되어선 안된다.

		return 0;
}