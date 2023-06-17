#include<stdio.h>
void print_N_even(int n);
main()
{
	int num;
	printf("How many even numbers you want to print");
	scanf("%d", &num);
	
	num = num*2;
	
	print_N_even(num);
	printf("End.");
}

void print_N_even(int n)
{
	if(n > 0)
	{
		print_N_even(n-2);
		printf("%d,", n);
	}
}
