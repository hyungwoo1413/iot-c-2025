#include <stdio.h>

int scanf3() {
	char name[50];
	int age;

	printf("이름을 입력하세요: ");
	scanf_s("%s", &name, sizeof(name));
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);

	printf(">> %s(%d)", name, age);
}