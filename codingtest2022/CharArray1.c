#include <stdio.h>

int main()
{
	char s1[20] = { "coding test" };
	int cnt = 0;
	while (s1[cnt] != '\0') { //�ι��ڰ� ���� ������ �ݺ�
		cnt++;
	}
	printf("���ڿ��� ���� : %d\n", cnt);
	cnt = 0;
	for (int i = 0; i < 20; i++) {
		if (s1[i] == '\0') break;
		else cnt++;
	}
	printf("���ڿ��� ���� : %d\n", cnt);

 	return 0;
}
