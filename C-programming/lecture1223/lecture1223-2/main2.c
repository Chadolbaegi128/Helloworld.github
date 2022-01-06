#include <stdio.h>

typedef struct tagNode {
	int Data;
	struct tagNode* Next;
	struct tagNode* Prev;
}Node;

int main() {
	Node a = { 10,NULL,NULL };
	Node b = { 20,NULL,NULL };
	Node c = { 30,NULL,NULL };
	Node d = { 40,NULL,NULL };

	a.Next = &b;
	a.Prev = NULL;
	b.Next = &c;
	b.Prev = &a;
	c.Next = &d;
	c.Prev = &b;
	d.Next = NULL;
	d.Prev = &c;


	

	printf("d.data = %d\n\n", a.Next->Next->Next->Data);
	printf("c.data = %d\n", a.Next->Next->Data);
	printf("c.data = %d\n\n", d.Prev->Data);
	printf("b.data = %d\n", a.Next->Data);
	printf("b.data = %d\n\n", d.Prev->Prev->Data);
	printf("a.data = %d\n", a.Data);
	printf("a.data = %d\n", d.Prev->Prev->Prev->Data);

	return 0;
}