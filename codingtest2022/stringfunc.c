#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100] = { "coding test" };
	char s2[100];
	char s3[100];

	printf("s1의 문자열 길이 : %d\n", strlen(s1));

	strcpy(s2, s1);
	printf("%s\n", s2);

	strcat(s2, s1);
	printf("%s\n", s2);

	strcmp("%s\n", strcmp("high", "school"));
	strcmp("%s\n", strcmp("school", "high"));
	strcmp("%s\n", strcmp("high", "high"));
 	return 0;
}
