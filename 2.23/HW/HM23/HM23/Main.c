#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if ((a > b) && (a>c)) 
	{
		printf("biggest is: %d\n" , a );
		if (b > c)
		{
			printf("least is: %d\n", c);
		}
		if (c > b )
		{
			printf("least is: %d\n", b);
		}
	}
	if ((b > a) && (b > c))
	{
		printf("biggest is: %d\n" , b);
		if (c > a)
		{
			printf("least is: %d\n", a);
		}
		if (a > c)
		{
			printf("least is: %d\n", c);
		}
	}
	if ((c > b) && (c > a))
	{
		printf("biggest is: %d\n" , c);
		if (a > b)
		{
			printf("least is: %d\n", b);
		}
		if (b > a)
		{
			printf("least is: %d\n", a);
		}
	}

	system("pause");
}