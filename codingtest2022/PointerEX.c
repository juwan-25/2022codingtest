#include <stdio.h>
int main()
{
	int num = 100;
	printf("%p %d\n", &num, num);

	// n은 원래 5라는 값을 가지고 있었으나 10으로 교체
	// 포인터는 주소값을 가짐
	int n = 5;
	printf("%d\n", n);
	int* ptr = &n;//5
	*ptr = 10;
	printf("%d\n",n); //10
	return 0;
}