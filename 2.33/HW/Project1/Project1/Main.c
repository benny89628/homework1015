#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e,f;
	printf("�`���{\n");
	scanf_s("%f",&a);
	printf("�o��\n");
	scanf_s("%f", &b);
	printf("���o��\n");
	scanf_s("%f", &c);
	printf("�����O\n");
	scanf_s("%f", &d);
	printf("�q��O\n");
	scanf_s("%f", &e);
	printf("��O\n");
	f = a * b*c + d + e;
	printf("%f\n", f);
	system("pause");
}