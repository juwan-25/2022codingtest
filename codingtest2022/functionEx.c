#include <stdio.h>

//�Է��� ���ڸ� ���ϴ� ���̸�ŭ ����ϴ� �Լ�
void display(int length, char ch)
{
	for (int i = 0; i < length; i++)
		printf("%c ", ch);
}

int isEven(int n)
{
	return (n % 2 == 0 ? 1 : 0);
}

int main(void)
{
	display(20, '#');
	printf("\n");

	if (isEven(10) == 1) printf("¦���Դϴ�.\n");
	else printf("Ȧ���Դϴ�.\n");

	return 0;
}
