#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	printf("enter a b\n");
	scanf_s("%d%d", &a,&b);
	c = a % b;
	if (c == 0)
	{
		printf("a is b ������\n");
	}
	if (c != 0)
	{
		printf("a not is b ������\n");
	}
	system("pause");
}