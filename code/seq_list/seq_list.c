#include <stdio.h>
#include <stdlib.h>
#include "seq_list.h"

Status init_sq(seq_list * sq)
{
	sq->elem = (Elem_type *) malloc(sizeof(Elem_type)*INIT_SIZE);
	if(sq->elem == NULL) exit(OVERFLOW);
	sq->length = 0;
	sq->size = INIT_SIZE;
	return OK;
}


Status destory_sq(seq_list * sq)
{
	free(sq->elem);
	sq = NULL;
	return OK;
}

Status clear_sq(seq_list * sq)
{
	sq->length = 0;
	return OK;
}

Status is_empty_sq(seq_list sq)
{
	return sq.length == 0;
}

Status insert_sq(seq_list * sq, int i, Elem_type e)
{
	if(i<0||i>sq->length+1) return ERROR;
	if(sq->length>=sq->size) 
		sq = (seq_list *) realloc(sq, (sq->size+INCREMENT)*sizeof(Elem_type));
	if (!sq) exit(OVERFLOW);
	int j;
	for(j=sq->length-1;j>=i-1;j--)
	{
		sq->elem[j+1] = sq->elem[j];
	}
	sq->elem[i-1] = e;
	sq->length++;
	return OK;
}
Status delete_sq(seq_list * sq, int i, Elem_type * e)
{
	if(i<0||i>sq->length) return ERROR;
	*e = sq->elem[i-1];
	
	int j;
	for(j=i-1; j<sq->length-1; j++)
	{
		sq->elem[j] = sq->elem[j+1];
	}
	
	sq->length--;
	return OK;
}
Status traverse(seq_list sq, Status (*visit)(Elem_type e))
{
	int i;
	for(i=0;i<sq.length;i++)
	{
		visit(sq.elem[i]);
	}
	return OK;
}

Status print(Elem_type e)
{
	printf("%d\n", e);
	return OK;
}
