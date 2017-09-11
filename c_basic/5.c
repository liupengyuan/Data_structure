#include <stdio.h>

#define SIZE 10

int sum(int *, int);

int main(void)
{
	int numbers[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int result;
	result = sum(numbers, SIZE);
	printf("the size of numbers is %d\n", sizeof(numbers));
	
	return 0;
}

int sum(int * nums, int n)
{
	int i, answer = 0;
	for(i=0;i<n;i++)
	{
		answer += nums[i];
	}
	printf("the size of nums is %d\n", sizeof(nums));
	return answer;
}
