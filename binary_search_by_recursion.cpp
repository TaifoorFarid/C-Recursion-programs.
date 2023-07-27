#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int binarySearch(int a[], int choice, int start, int end)
{
	if(start > end)
	return -1;
	int mid = (start + end)/2;
	if(a[mid] == choice)
    	return mid;
	else if(a[mid] > choice)
    	return binarySearch(a, choice, start, mid-1);
	else
    	return binarySearch(a, choice, mid + 1, end);
}

void sort(int a[], int size)
{
	for(int i = 1 ; i < size ; i++)
	{
    	int flag = 1;
		for(int j = 0 ; j < size - i ; j++)
		{
			
			if(a[j] > a[j + 1])
			{
				flag = 0;
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(flag)
		break;
	}
}

void store(int a[], int size)
{
	srand(time(NULL));
	for(int i = 0 ; i < size ; i++)
	a[i] = 1 + rand() % 1000;
}

void print(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	printf("%d ", a[i]);
}

main()
{
	int arr[200];
	int size = sizeof(arr)/sizeof(arr[0]);
	store(arr, size);
	sort(arr, size);
	print(arr, size);
    while(getche() != 'e')
    {
    	int choice;
    	printf("\nEnter number you want to search: ");
     	scanf("%d", &choice);
    	int start = 0;
    	int end = size - 1;
    	int result = binarySearch(arr, choice, start, end);
    	if(result == -1)
        	printf("\nThe searched number does not exsist.\nPress e to end and Enter to continue\n");
    	else
        	printf("\nThe searched number is on index: %d\nPress e to end and Enter to continue\n", result);
    }
}
