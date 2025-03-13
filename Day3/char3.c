#include <stdio.h>

int change(int);

int main() {
	
	char ch;

	printf("문자변환 프로그램\n");
	printf("문자를 입력하세요: ");

	ch = getchar();
	change(ch);

	return 0;
}

int change(int ch)
{
	char res;

	if (ch <= 'A' && ch <= 'Z') {
		res = ch + 32;
	}
	else if (ch <= 'a' && ch <= 'z') {
		res = ch - 32;
	}
	printf("%c", res);

	return res;
}
