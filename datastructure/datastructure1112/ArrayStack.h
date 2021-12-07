#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;//자료형 이름 재정의

typedef struct tagNode
{
	ElementType Data;
}Node;//구조체 별칭 재정의

typedef struct tagArrayStack
{
	int Capacity;
	int Top;
	Node* Nodes;
}ArrayStack;//구조체 별칭 재정의

void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);
void AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* Stack);
ElementType AS_Top(ArrayStack* Stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

#endif // !ARRAYSTACK_H

