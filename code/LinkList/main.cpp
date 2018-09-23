#include "linklist.h"

int main(void)
{
	LinkList L = createListF();
	ElemType e;
	traverse(L);
	Delete(L, 3, e);
	printf("%c\n", e);
	traverse(L);
	Delete(L, 3, e);
	printf("%d\n", Length(L));
	printf("%c\n", e);
	traverse(L);
	Insert(L, 'h', 5);
	traverse(L);
	Insert(L, 'g', 1);
	traverse(L);
	makeEmpty(L);
	printf("%d\n", Length(L));
	traverse(L);
	system("pause");
	return 1;
}