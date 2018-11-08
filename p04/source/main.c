#include<stdio.h>
#include<stdlib.h>
main()
{
	int i[10];
	int j;
	printf("%s%7s\n", "Element", "value");
	for (j = 0; j <= 9; j++)
	{
		i[j] = 0;
		printf("%d%10d\n", j, i[j]);
	}
	system("pause");
}