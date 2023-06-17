#include<stdio.h>
void SquarePrint(int n);
main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	SquarePrint(num);
	printf("End.");
}

void SquarePrint(int n)
{
	if(n > 0)
	{
		SquarePrint(n-1);
		printf("%d,", n*n);
	}
}
