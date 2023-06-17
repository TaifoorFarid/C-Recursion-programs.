#include<stdio.h>
int numberReverse(int n);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int res = numberReverse(num);
	printf("The reverse of %d: %d", num, res);
}

int numberReverse(int n)
{
	if(n < 10)
	return n;
	return 10*(n%10) + numberReverse(n/10);
}
