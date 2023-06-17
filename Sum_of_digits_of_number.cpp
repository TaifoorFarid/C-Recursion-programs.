#include<stdio.h>
int cal_sum(int n);
int main ()
{
	int num;
	
	printf("Enter the number: \n");
	scanf("%d", &num);
	
	int res = cal_sum(num);
	printf("The sum of digits of %d is %d", num, res);
}

int cal_sum(int n)
{
	if(n == 0)
	return 0;
	int dig = n % 10;
	int sum = dig + cal_sum(n/10);
	return sum;
}
