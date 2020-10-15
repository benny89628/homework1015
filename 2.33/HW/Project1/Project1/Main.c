#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e,f;
	printf("總里程\n");
	scanf_s("%f",&a);
	printf("油價\n");
	scanf_s("%f", &b);
	printf("均油耗\n");
	scanf_s("%f", &c);
	printf("停車費\n");
	scanf_s("%f", &d);
	printf("通行費\n");
	scanf_s("%f", &e);
	printf("花費\n");
	f = a * b*c + d + e;
	printf("%f\n", f);
	system("pause");
}