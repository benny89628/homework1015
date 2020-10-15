#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	scanf_s("%d",&a);
	b = a % 2;
	if (b == 1)
	{
		printf("odd");
	}
	if (b == 0)
	{
		printf("even");
	}
	system("pause");
}