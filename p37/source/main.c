#include<stdio.h>
#include<stdlib.h>
#define size 100
int linesearch(int b[],int y);
main()
{
	int a[size] = {0}, i,element,x;
	for (i = 0; i < size; i++)
	{
		a[i] = i * 2;
	}
	printf("Enter integer search key:");
	scanf_s("%d",&x,sizeof(a));
	element= linesearch(a,x);
	if (element != -1)
	{
		printf("Find value in the element:%d\n", element);
	}
	else
	{
		printf("Value not found");
	}
	system("pause");
}
int linesearch(int b[], int y)
{
	int n;
	for (n = 0; n < size; n++)
	{
		if (b[n] == y)
		{
			return n;
		}
	}
	return -1;
}