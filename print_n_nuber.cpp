#include<stdio.h>
#include<conio.h>
void Print_N_numbers(int n);
main()
{
	int num;
	
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	Print_N_numbers(num);
	printf("End.");
	getch();
}

void Print_N_numbers(int n)
{
	if(n > 0)
	{
		Print_N_numbers(n-1);
		printf("%d,", n);
	}
}
