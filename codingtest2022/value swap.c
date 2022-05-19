#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 5; int b = 8;
	swap(&a, &b);
	printf("함수 호출 후\n");
	printf(" a : %d, b : %d", a, b);

	return 0;
}