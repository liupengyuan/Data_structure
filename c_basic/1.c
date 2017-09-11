#include <stdio.h>

void test_add(int);

int main(void)
{
	int c;
	printf("in main(), address=%p\n", &c);
	int a = 10;
	printf("in main(), a=%d, address=%p\n", a, &a);
	int * ptr = &a;
	printf("in main(), ptr=%d, address=%p\n", *ptr, ptr);
	int b = 5;
	printf("in main(), b=%d, address=%p\n", b, &b);
	test_add(a);
	
	return 0;
}

void test_add(int a)
{
	int b = 5;
	printf("in sub(), a=%d, address=%p\n", a, &a);
	printf("in sub(), b=%d, address=%p\n", b, &b);
}
