#include<stdio.h>

int plndrm(int num, int pln)
{
	if(num == 0)
	return pln;
	
	int dig = num % 10;
	pln = pln * 10 + dig;
	return plndrm(num / 10, pln);
}

main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int pln = 0;
	pln = plndrm(num, pln);
	
	if(pln == num)
	printf("The number is Plndrom");
	else
	printf("The number is not plndrom");
}
