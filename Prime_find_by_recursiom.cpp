#include<stdio.h>
int primeCheck(int n, int d);
main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	int res = primeCheck(num, num/2);
	if(res == 1)
	printf("%d is Prime", num);
	else
	printf("%d is not Prime", num);
}

int primeCheck(int n, int d)
{
	if(n % d == 0)
	return d;
	primeCheck(n, d-1);
}
