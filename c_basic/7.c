#include <stdio.h>
#include <string.h> 

void test_correct_1(void);
void test_error_1(void);

int main(void)
{
	test_correct_1();
	//test_error_1();
	
	return 0;
}

void test_correct_1()
{
	struct student{
		char name[20];
		int age;
		char sex;
	}computer;
	
	computer.age = 0;
	computer.sex = 'm';
	strcpy(computer.name, "AlphaGo");
	printf("%s\n", computer.name);
}

void test_error_1()
{
	struct student{
		char name[20];
		int age;
		char sex;
	} * computer;
	
	computer->age = 0;
	computer->sex = 'm';
	strcpy(computer->name, "AlphaGo");
	printf("%s\n", computer->name);
}
