/*Basic program to print address of a variable*/
/*C in Depth P9.1 example*/

#include<stdio.h>

int main()
{
	int age = 30;
	float salary = 1500.50;
	printf("Address of age = %p\n", &age);
	printf("Address of salary = %p\n", &salary);
	return 0;
}
