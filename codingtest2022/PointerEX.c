#include <stdio.h>
int main()
{
	int num = 100;
	printf("%p %d\n", &num, num);

	// n�� ���� 5��� ���� ������ �־����� 10���� ��ü
	// �����ʹ� �ּҰ��� ����
	int n = 5;
	printf("%d\n", n);
	int* ptr = &n;//5
	*ptr = 10;
	printf("%d\n",n); //10
	return 0;
}