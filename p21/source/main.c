#include<stdio.h>
#include<stdlib.h>
int staticArray(void);
int autoArray(void);
main()
{
	printf("First call to each function\n");
	staticArray();
	autoArray();
	printf("\n\nSecond call to each function\n");
	staticArray();
	autoArray();
	system("pause");
}
int staticArray(void)
{
	static int array[3];
	int i;
	printf("\nValue on entering staticArray:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array[%d]=%d    ", i, array[i]);
	}
	printf("\nValue on exiting staticArray:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array[%d]=%d     ", i, array[i]+=5);
	}
}
int autoArray(void)
{
	int array2[3] = { 1,2,3 };
	int j;
	printf("\nValue on entering autoArray:\n");
	for (j = 0; j <= 2; j++)
	{
		printf("array2[%d]=%d    ", j, array2[j]);
	}
	printf("\nValue on exiting autoArray:\n");
	for (j = 0; j <= 2; j++)
	{
		printf("array2[%d]=%d     ", j, array2[j] += 5);
	}
}