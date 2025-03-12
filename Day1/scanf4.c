#include <stdio.h>

int scanf4() {
	int age;
	char name[20];

	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	printf("이름을 입력하세요: ");
	scanf_s("%s", name, sizeof(name));

	printf(">> %s(%d)님 안녕하세요", name, age);
}