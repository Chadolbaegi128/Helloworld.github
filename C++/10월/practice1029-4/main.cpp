#include <iostream>

using namespace std;

int main() {

	//�迭�� ����: �ڷ���+�迭��(������� �����)[�迭 ����-���ڷ� ǥ��];
	int one_student_score;//int Ÿ�� ���� 1�� ����
	int student_scores[5];//int Ÿ�� ���� 5���� �迭�� ����(������ ������)

	cout << sizeof(one_student_score) << "\n";
	cout << sizeof(student_scores) << "\n";

	one_student_score = 100;

	student_scores[0] = 100; // ù��° ���(first element)
	//�ؿ��(element): �迭�� �ִ� �� ������ ����. ��ҿ��� �������� ������ 
	//�迭�� ���� ��ҿ� �����Ϸ��� �迭�� ���� ���� ������('[]')�� �ְ�
	//���� ������ �ȿ� '�ε���(index)'��� �Ű� ������ �ִ´�.
	//���� ��� student_scores �迭�� ù��° ��Ҹ� ���� ����
	//'student_scores[0]=100'��� �ۼ��Ѵ�. ���⼭ 0�� �ۼ��� ������ 0�� �޸� �ּ��� �������̱� �����̴�.
	//�׷��� �ι�° ��Ҹ� ���� ���� 'student_scores[1]=20;'��� �ۼ��ϸ� �ȴ�.
	//�׸��� �տ��� ������ �迭�� ������ ��Ұ��� ���� ���� �ش� �迭 ���̿��� 1�� �� ���ڸ� ������ �ȴ�.
	//���⼭�� 'student_scores[4]=20;'�� ������ ����� ���̶�� �� �� �ִ�.
	//*����: �迭�� �ۼ��� ���� ������ ����� �ε��� ���� ó�� �������� ���� ���� ������ �ɰ��� ������ �߻��� �� �ִ�.
	student_scores[1] = 20; 
	student_scores[2] = 40;
	student_scores[3] = 50;
	// student_scores[5]=10; //5��° ���(5th element)-������ ��ҷ� ���Ǿ �ȵȴ�.

	cout << student_scores[0] << "\n";
	cout << student_scores[1] << "\n";
	cout << student_scores[2] << "\n";
	//cout << student_scores[5] << "\n";->������ ��ҷ� ���Ǿ �ȵȴ�.

		return 0;
}