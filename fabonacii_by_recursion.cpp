#include<stdio.h>
long long unsigned int  Fabonacci(int n);
main()
{
	int choice;
	
	printf("Enter a number: ");
	scanf("%d", &choice);
	
	printf("Febonacci: ");
	for(int i = 0 ; i < choice ; i++)
	printf("%llu ", Fabonacci(i)); 
}

long long unsigned int Fabonacci(int n)
{
	if(n <= 1)
	return n;
	return Fabonacci(n-1) + Fabonacci(n-2);
}
