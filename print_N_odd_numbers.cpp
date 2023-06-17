#include<stdio.h>
void print_odd_N(int n);
main()
{
	int num;
	printf("How many odd natural numbers you want to print: \n");
	scanf("%d", &num);
	
	num = num*2-1;
	
	print_odd_N(num);
	printf("End.");
}


void print_odd_N(int n)
{
	if(n > 0)
	{
		print_odd_N(n-2);
		printf("%d,", n);
	}
}
