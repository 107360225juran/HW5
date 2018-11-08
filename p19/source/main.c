#include<stdio.h>
#include<stdlib.h>
main()
{
	int i;
	char string1[20], string2[20] = "string literal";
	printf("Enter a string:");
	scanf_s("%s", string1, sizeof(string1));
	printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
	printf("string1 with spaces between characters is: \n");
	for (i = 0; string1[i] != '\0'; i++)
	{
		printf(" %c", string1[i]);
	}
	system("pause");
}