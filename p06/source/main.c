#include<stdio.h>
#include<stdlib.h>
#define size 10
main()
{
	int s[size];
	int i, j=0;
	printf("%s%7s\n", "Element", "value");
	for (i = 0; i < size; i++)
	{
		j = j + 2;
		s[i] = j;
		printf("%d%10d\n", i, s[i]);
	}
	system("pause");
}