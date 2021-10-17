#include <iostream>
#include <string>

using namespace std;

int global = 0;//외부변수(전역변수)

int main() {

	//변수
	//접근범위, 존속기간

	int a = 20;//로컬변수
	{
		int a; //로컬변수, 자동변수
		static int b = 0; //로컬변수, 정적변수
	}


	return 0;
}