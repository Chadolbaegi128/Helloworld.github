// �������� 2���� �迭�� ���� ���� �������迭�� �ּҰ���
// �����ϴ� �Լ�
int** MakeDynamic2Darray(int column, int row) {
	int** pparray = (int**)malloc(sizeof(int*) * column);

	for (int i = 0; i < column; i++) {
		pparray[i] = (int*)malloc(sizeof(int) * row);
	}

	return pparray;
}

//���� 2�����迭�� �Ҵ�, �����ϴ� �Լ�
void DeleteDynamic2Darray(int** pparray, int column) {
	for (int i = 0; i < column; i++) {
		free(pparray[i]);//row���� ��� �迭�� �ּҰ��� �ݳ�
	}

	free(pparray);//row�� �ּҰ��� ��� ������ �ݳ���
}