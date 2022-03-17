#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[10];
	int sum = 0;
	double avg;
	for (int i = 0; i < sizeof(num)/sizeof(int); i++) {
		num[i] = (rand()/100)+1;
		printf("%d ", num[i]);
	}
	printf("\n\n");

	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		sum += num[i];

	avg = (double)sum / (sizeof(num) / sizeof(int));
	
	printf("ÇÕ°è : %d Æò±Õ : %lf", sum, avg);
 	return 0;
}
