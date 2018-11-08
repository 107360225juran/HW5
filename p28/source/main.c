#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int modifyarray(int b[], int size);
int modifyelement(int e);
void main()
{
	int a[SIZE] = { 0,1,2,3,4 } ;
	int i;
	printf("Effects of passing entire array by refrence:\n\nThe"
"values of the original array are:\n");
	for (i = 0; i < SIZE;i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	modifyarray(a, SIZE);
	for (i = 0; i < SIZE;i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n\n\nEffects of passing array element"
		"by value:\n\nThe value of a[3] is %d\n", a[3]);
	modifyelement(a[3]);
	printf("The value of a[3] is%d\n", a[3]);
	system("pause");
}
int modifyarray(int b[], int size)
{
	int j;
	printf("values of the modify array are:\n");
	for (j = 0; j < size; j++)
	{
		b[j] = b[j] * 2;
	}
}
int modifyelement(int e)
{
	printf("The value in modifyelement is %d\n", e * 2);
}