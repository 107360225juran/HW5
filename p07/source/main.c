#include<stdio.h>
#include<stdlib.h>
#define size 12
main()
{
	int s[size] = { 1,3,5,4,7,2,99,16,45,67,89,45 };
	int i, j=0;
	printf("Total of array element value is:");
	for (i = 0; i < size; i++)
	{
		j = j + s[i];
	}
	printf("%d\n", j);
	system("pause");
}