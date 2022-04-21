#include <stdio.h>

int main()
{
	int data = 100;
	char ch = 'A';
	int* ptrint = &data;
	char* ptrchar = &ch;
	printf("간접 참조 출력 : %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200; //data를 *ptrint로 간접 참조하여 내용 수정
	*ptrchar = 'B'; //ch를 *ptrchar로 간접 참조하여 내용 수정
	printf("직접 참조 출력 : %d %c\n", data, ch);

	return 0;
}