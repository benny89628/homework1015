#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c;
	printf("���� �魫");
	scanf_s("%f%f", &a, &b);
	c = b/a/a;
	printf("BMI:%f",c);
	system("pause");
}