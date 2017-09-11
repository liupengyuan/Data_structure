#include <stdio.h>

void swap(int *, int *);

int main(void)
{
	int a = 10, b = 5;
	printf("pre swap, a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("pre swap, a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
