#include<stdio.h>
#include<stdlib.h>
#define size 10
main()
{
	int s[10] = { 19,3,15,7,11,9,13,5,17,1 };
	int i, j;
	printf("%s%7s%17s", "Element", "value", "Histogram\n");
	for (i = 0; i < size; i++)
	{
		printf("%d%10d       ", i, s[i]);
		for (j = 1; j <= s[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}