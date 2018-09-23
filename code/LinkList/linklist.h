#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;

typedef struct node {         	     //链表结点
	ElemType data;                   //结点数据域
	struct node * link;               //结点链域
} ListNode;

typedef ListNode * LinkList;		//指向链表节点的指针	

LinkList createListF(void);
LinkList createListR(void);
ListNode * Find(LinkList, ElemType);
ListNode * Locate(LinkList, int);
bool Insert(LinkList, ElemType, int);
bool Delete(LinkList, int, ElemType &);
int traverse(LinkList);
int Length(LinkList);
int makeEmpty(LinkList);