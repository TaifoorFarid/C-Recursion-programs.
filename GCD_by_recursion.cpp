#include<stdio.h>
int GCD(int large, int small);
main()
{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	
	int small = num1;
	int large = num2;
	if(small > num2){
		small = num2;
		large = num1;
	}
		
	int res = GCD(large, small);
	printf("GCD is %d", res);
}

int GCD(int large, int small)
{
	static int num = small;
	if(large % small == 0 && num % small == 0)
	return small;
	GCD(large, small-1);
}
