#include <stdio.h>

int main()
{
	char color[5][10] = { "red", "green", "blue", "brown", "cyan" };
	//���ڿ� ����
	for (int i = 0; i < 5; i++)
		printf("%s\n", color[i]);
	printf("\n");

	//���� ����
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j< 10; j++) {
			printf("%c", color[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");


 	return 0;
}
