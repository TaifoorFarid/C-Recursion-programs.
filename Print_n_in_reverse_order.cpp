#include<stdio.h>
void number_print(int num);
main()
{
	int num;
	printf("How many natural numbers you want to print?\n");
	scanf("%d", &num);
	
	number_print(num);
	printf("End.");
}


void number_print(int num)
{
	if(num > 0)
	{
	    printf("%d,", num);
    	number_print(num - 1);
    }
}
