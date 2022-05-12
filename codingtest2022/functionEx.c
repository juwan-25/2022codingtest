#include <stdio.h>

//입력한 문자를 원하는 길이만큼 출력하는 함수
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

	if (isEven(10) == 1) printf("짝수입니다.\n");
	else printf("홀수입니다.\n");

	return 0;
}
