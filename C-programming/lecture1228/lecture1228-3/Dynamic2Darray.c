// 동적으로 2차원 배열을 만들어서 동적 이차원배열의 주소값을
// 리턴하는 함수
int** MakeDynamic2Darray(int column, int row) {
	int** pparray = (int**)malloc(sizeof(int*) * column);

	for (int i = 0; i < column; i++) {
		pparray[i] = (int*)malloc(sizeof(int) * row);
	}

	return pparray;
}

//동적 2차원배열을 할당, 해제하는 함수
void DeleteDynamic2Darray(int** pparray, int column) {
	for (int i = 0; i < column; i++) {
		free(pparray[i]);//row값을 담는 배열의 주소값을 반납
	}

	free(pparray);//row의 주소값을 담는 공간을 반납함
}