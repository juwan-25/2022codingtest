#include <stdio.h>

int main()
{
	char color[5][10] = { "red", "green", "blue", "brown", "cyan" };
	//문자열 단위
	for (int i = 0; i < 5; i++)
		printf("%s\n", color[i]);
	printf("\n");

	//문자 단위
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j< 10; j++) {
			printf("%c", color[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");


 	return 0;
}
