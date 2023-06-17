#include<stdio.h>
int cal_sum(int n);
main()
{
	int num;
	
	printf("Enter any number:\n");
	scanf("%d", &num);
	
	int res = cal_sum(num);
	printf("sum of %d is %d", num, res);
}

int cal_sum(int n)
{
	int sum = 0;
	if(n < 1)
	return 0;
	return n + cal_sum(n-1); 	
}
