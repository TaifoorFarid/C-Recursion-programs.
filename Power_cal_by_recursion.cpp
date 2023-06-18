#include<stdio.h>
int powerCal(int b, int p);
main()
{
	int base, power;
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the power: ");
	scanf("%d", &power);
	
	int res = powerCal(base,power);
	printf("%d^%d = %d", base, power, res);
}

int powerCal(int b, int p)
{
	if(p == 1)
	return b;
	return b * powerCal(b , p-1);
}
