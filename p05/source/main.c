#include<stdio.h>
#include<stdlib.h>
main()
{
	int i[10] = { 32,27,64,18,95,14,90,70,60,37},j;
	printf("%s%7s\n", "Element", "value");
	for (j = 0; j <= 9; j++)
	{
		printf("%d%11d\n", j, i[j]);
	}
	system("pause");
}