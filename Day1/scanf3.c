#include <stdio.h>

int scanf3() {
	char name[50];
	int age;

	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", &name, sizeof(name));
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);

	printf(">> %s(%d)", name, age);
}