#include<stdio.h>
unsigned long long int binaryConvert(int n);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	unsigned long long int res = binaryConvert(num);
	printf("Binary of %d: %llu", num, res);
}

unsigned long long int binaryConvert(int n)
{
	if(n == 0)
	return 0;
	return ((n%2) + 10*binaryConvert(n/2));
}
