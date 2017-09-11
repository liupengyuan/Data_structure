#include <stdio.h>

int main(void)
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("if it is equal,then one = %d\n", a==&a[0]);
	
	int c;
	printf("%p\n", &c);
	printf("%p\n", &c+1);
	printf("%p\n", &c-1);

	int * ptr = a;
	printf("ptr++ = %p\n", ptr++);
	
	printf("*(a+2)=%d==a[2]=%d\n", *(a+2), a[2]);
	return 0;
}
