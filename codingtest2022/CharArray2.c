#include <stdio.h>

int main()
{
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;
	for (int i = 0; i < 20; i++) {
		if (s2[i] == '\0') break;
		else s2[i] = s1[i];
	}
	printf("%s", s2);

 	return 0;
}
