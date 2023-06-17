#include<stdio.h>
int numRev(int n);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int res = numRev(num);
	printf("The reverse of %d: %d", num, res);
}

int numRev(int n)
{
	static int rev;
	if(n == 0)
	return rev;
	rev = rev * 10 + (n%10);
	numbRev(n/10);
}
