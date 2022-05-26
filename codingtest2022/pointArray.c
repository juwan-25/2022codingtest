#include <stdio.h>

int main()
{
	int  score[] = { 89,98, 76 };

	printf("score : %u, &score[0] : %u\n", score, &score[0]);

	printf("score : %d, score[0] : %d\n", *score, score[0]);

	for (int i = 0; i < 3; i++)
		printf("%2d %10u %6d\n", i, (score + i), *(score + i));

	printf("++*score : %u\n", ++(*score));
	printf(" * (score + 1) : % u\n", *(score + 1));
	printf("--*score : %u\n", --(*score));
	printf("(*score)-- : %u\n", (*score)--);
	printf("*++score : %u\n", *(score + 1));

	return 0;
}