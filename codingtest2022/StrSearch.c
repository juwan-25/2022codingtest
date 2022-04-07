#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[6][10] = { "한국", "미국", "일본", "영국", "독일", "호주" };
	char key[10] = "독일";
	for (int i = 0; i < 6; i++) {
		printf("%s\n", s1[i]);
		// 오름차순 1->10
		// 내림차순 10 ->
		// 1. strcmp("A","B")
		//A랑 B랑 같은경우 0, 사전순(오름차순)으로 A가 B보다 먼저 나올경우 1, 사전순으로 A가 B보다 늦게 나올경우 -1
		if (strcmp(s1[i], key) == 0) {
			 printf("%d번째 찾는 값이 있습니다.\n", (i + 1));
			 break; //독일을 찾자마자 for문을 빠져나감
		} 

	}

}
