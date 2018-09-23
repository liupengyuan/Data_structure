#include "linklist.h"
//带头结点的单链表
LinkList createListF(void)
{
	ElemType ch;
	ListNode* newNode;
	LinkList first = new ListNode;
	first->link = NULL;

	while ((ch = getchar()) != '\n')
	{
		newNode = new ListNode;
		newNode->data = ch;
		newNode->link = first->link;
		first->link = newNode;
	}
	return first;
}

LinkList createListR(void)
{
	ElemType ch;
	ListNode* newNode;
	LinkList first = new ListNode;
	LinkList r = first;
	
	while ((ch = getchar()) != '\n')
	{
		newNode = new ListNode;
		newNode->data = ch;
		r->link = newNode;
		r = newNode;
	}
	r->link = NULL;
	return first;
}

ListNode * Find(LinkList L, ElemType x)
{
	ListNode *p = L->link;
	while (p != NULL && p->data != x)
		p = p->link;
	return p;
}
ListNode * Locate(LinkList L, int i)
{
	if (i < 0) return NULL;
	ListNode *p = L;
	int k = 0;
	while (p != NULL && k < i)
	{
		p = p->link;
		k++;
	}
	return p;
}
bool Insert(LinkList L, ElemType x, int i)
{
	ListNode *p = Locate(L, i - 1);
	if (p == NULL) return 0;
	ListNode *newNode = new ListNode;
	newNode->data = x;
	newNode->link = p->link;
	p->link = newNode;
	return 1;
}
bool Delete(LinkList L, int i, ElemType &x)
{
	ListNode *p = Locate(L, i - 1);
	if (p == NULL||p->link==NULL) return 0;
	ListNode *q=p->link;
	x = q->data;
	p->link = q->link;
	delete q;
	return 1;
}

int traverse(LinkList L) 
{
	ListNode *p = L->link;
	while (p != NULL)
	{
		printf("%c ", p->data);
		p = p->link;
	}
	printf("\n");
	return 1;
}
int makeEmpty(LinkList L)
{
	ListNode *p = L->link;
	while (p != NULL)
	{
		L->link = p->link;
		delete p;
		p = L->link;
	}
	return 1;
}

int Length(LinkList L)
{
	ListNode *p = L->link;
	int length = 0;
	while(p!= NULL)
	{ 
		length++;
		p = p->link;
	}
	return length;
}