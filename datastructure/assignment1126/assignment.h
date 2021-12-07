#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <stdio.h>
#include <stdlib.h>
#include "Score.h"

typedef Score ElementType;

typedef struct tagNode
{
	ElementType Data;// 데이터
	struct tagNode* NextNode;//다음 노드의 주소값을 저장
} Node;

Node* SLL_CreateNode(ElementType NewData);
void  SLL_DestroyNode(Node* Node);
void  SLL_AppendNode(Node** Head, Node* NewNode);
void  SLL_InsertAfter(Node* Current, Node* NewNode);
void  SLL_InsertNewHead(Node** Head, Node* NewHead);
void  SLL_RemoveNode(Node** Head, Node* Remove);
Node* SLL_GetNodeAt(Node* Head, int Location);
int   SLL_GetNodeCount(Node* Head);

#endif // !ASSIGNMENT_H

