#include<stdio.h>
#include<stdlib.h>
#define student 3
#define exam 4
int maxium(int grade[][exam], int pupil, int test);
int minium(int grade[][exam], int pupil, int test);
int printarray(int array[][exam], int pupil, int test);
int arrage(int grade[][exam], int pupil, int test);
main()
{
	int studentgrades[student][exam] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is:\n");
	printarray(studentgrades, student, exam);
	minium(studentgrades, student, exam);
	maxium(studentgrades, student, exam);
	arrage(studentgrades, student, exam);
	system("pause");
}
int printarray(int array[][exam],int pupil,int test)
{
	int i, j;
	printf("                 [0] [1] [2] [3]\n");
	for (i = 0; i < pupil; i++)
	{
		printf("studentgrades[%d]", i);
		for (j = 0; j < test; j++)
		{
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
}
int minium(int grade[][exam], int pupil, int test)
{
	int i,j;
	int lowest = 100;
	for (i = 0; i < student; i++)
	{
		for (j = 0; j < exam; j++)
		{
			if (lowest > grade[i][j])
			{
				lowest = grade[i][j];
			}
		}
	}
	printf("The lowest grade is:");
	printf("%d\n", lowest);
}
int maxium(int grade[][exam], int pupil, int test)
{
	int i, j;
	int largest = 0;
	for (i = 0; i < student; i++)
	{
		for (j = 0; j < exam; j++)
		{
			if (largest < grade[i][j])
			{
				largest = grade[i][j];
			}
		}
	}
	printf("The largest grade is:");
	printf("%d\n", largest);
}
int arrage(int grade[][exam], int pupil, int test)
{
	int i, j;
	double arrage=0;
	for (i = 0; i < student; i++)
	{
		for (j = 0; j < exam; j++)
		{
			arrage = arrage + grade[i][j];
		}
		printf("The average grade for student %d is:%.2lf\n",i,arrage/ exam);
		arrage = 0;
	}
}
