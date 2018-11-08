#include<stdio.h>
#include<stdlib.h>
int inverse(int *x);
main()
{
	int a[3] = { 3,5,7 }, i;
	for (i = 0; i < 3; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	inverse(a);
	for (i = 0; i < 3; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
}
int inverse(int *x)
{
	int temp[3] = { 0 }, j;
	for (j = 0; j < 3; j++)
	{
		temp[2 - j] = x[j];
	}
	for (j = 0; j < 3; j++)
	{
		x[j] = temp[j];
	}
}