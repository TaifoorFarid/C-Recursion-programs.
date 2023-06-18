#include<stdio.h>
int checkLCM(int sml, int lrg);
main()
{
	int num1, num2;
	printf("Enter two numbers: \n");
	scanf("%d%d", &num1, &num2);
	
	int small = num1;
	int large = num2;
	if(small > num2){
		small = num2;
		large = num1;
	}
	
	
	int res = checkLCM(small, large);
	printf("LCM of %d and %d is %d", num1, num2, res);
}

int checkLCM(int sml, int lrg)
{
	static int hold = lrg;
	if(lrg % sml == 0 && lrg % hold == 0)
	return lrg;
    hold == lrg ? checkLCM(sml,lrg*2) : checkLCM(sml,lrg+1);
	
	
}
