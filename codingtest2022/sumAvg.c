#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[10];
	int sum = 0;
	double avg;
	for (int i = 0; i < 10; i++) {
		num[i] = rand()/100;
	}

	for (int i = 0; i < 10; i++)
		sum += num[i];

	avg = (double)sum / 10;
	
	printf("�հ� : %d ��� : %lf", sum, avg);
 	return 0;
}
