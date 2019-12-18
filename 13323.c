#include<stdio.h>
#include<Windows.h>
void main()
{
	int tall; char sex;
	printf("input sex and tall :");
	scanf("%c %d\n", &sex, &tall);
	if (sex == 'f')
	{
		if (tall >= 150) printf("a");
		else print("b");
	}
	else
	{
		if (tall >= 170) printf("b");
		else printf("b");
	}

}