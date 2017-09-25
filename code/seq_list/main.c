#include <stdio.h>
#include <stdlib.h>
#include "seq_list.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	seq_list L;
	init_sq(&L);
	//printf("%d\n", is_empty_sq(L));
	insert_sq(&L, 1, 1);
	insert_sq(&L, 2, 2);
	insert_sq(&L, 3, 3);
	insert_sq(&L, 4, 4);
	insert_sq(&L, 5, 5);
	insert_sq(&L, 2, 100);
	Elem_type e;
	delete_sq(&L, 3, &e);
	printf("delete %d\n", e);
	traverse(L, print);
	destory_sq(&L);
	return 0;
}
