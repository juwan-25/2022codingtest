#include <stdio.h>

int main()
{
	char ch = '9';
	int num = ch - 48; //'9' - 48
	int n = 9;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, num, n);
	//ch = '9' num = 9 n = 9

	ch++;
	num++;
	n++;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, num, n);
	//ch = ':' num = 10 n = 10

	ch+='1';
	num+='1';
	n+='1';
	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, num, n);
	//ch = 'k' num = '59' n = '59'

 	return 0;
}
