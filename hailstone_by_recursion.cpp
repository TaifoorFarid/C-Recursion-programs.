#include<stdio.h>
void hailstone(int n);
main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Hailstone sequence: ");
	hailstone(num);
}

void hailstone(int n)
{
	if(n == 1){
		printf("%d ", n);
    	return;	
	}
	if(n % 2 == 0){
		printf("%d ", n);
		hailstone(n/2);
	}
	else{
		printf("%d ", n);
		hailstone((n*3) + 1);
	}
}
