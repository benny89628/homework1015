#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c;
	printf("身高 體重");
	scanf_s("%f%f", &a, &b);
	c = b/a/a;
	printf("BMI:%f",c);
	system("pause");
}