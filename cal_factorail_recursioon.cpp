#include<stdio.h>
int cal_fact(int n);
int count = 0;
int main()
{
	int num;
	printf("Enter any number to calculate factorial:\n");
	scanf("%d", &num);
	
	int res = cal_fact(num);
	printf("Factorial of %d is %d", num, res);
	return 0;
}

int cal_fact(int n)
{
		if(n < 1)
		return 1;
		return n * cal_fact(n-1);
}
