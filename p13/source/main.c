#include<stdio.h>
#include<stdlib.h>
int printarray(int a[][3]);
main()
{
	int array1[2][3] = { {1,2,3,},{4,5,6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1,2},{4} };
	printf("Value in array1 by row are :\n");
	printarray(array1);
	printf("Value in array2 by row are :\n");
	printarray(array2);
	printf("Value in array2 by row are :\n");
	printarray(array3);
	system("pause");
}
int printarray(int a[][3])
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
}