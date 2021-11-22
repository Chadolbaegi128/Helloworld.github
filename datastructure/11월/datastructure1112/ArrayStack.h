#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;//�ڷ��� �̸� ������

typedef struct tagNode
{
	ElementType Data;
}Node;//����ü ��Ī ������

typedef struct tagArrayStack
{
	int Capacity;
	int Top;
	Node* Nodes;
}ArrayStack;//����ü ��Ī ������

void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);
void AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* Stack);
ElementType AS_Top(ArrayStack* Stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

#endif // !ARRAYSTACK_H

