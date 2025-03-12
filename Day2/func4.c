#include <stdio.h>

int func(int, int);
int sum(int, int);
int sub(int, int);
int mul(int, int);
double div(double, double);

int main() {
	int num1, num2;
	char s;
	int res;

	while (1) {
		printf("계산기 프로그램입니다.\n");
		printf("두개의 정수를 입력하세요.\n\n");

		printf("첫번째: ");
		scanf_s("%d", &num1);
		printf("두번째: ");
		scanf_s("%d", &num2);
		getchar();
		printf("연산자를 입력하세요(+, -, *, /): ");
		scanf_s("%c", &s, sizeof(s));
		getchar();

		switch (s) {
		case '+':
			res = sum(num1, num2);
			printf("결과: %d", res);
			break;
		case '-':
			res = sub(num1, num2);
			printf("결과: %d", res);
			break;
		case '*':
			res = mul(num1, num2);
			printf("결과: %d", res);
			break;
		case '/':
			if (num1 == 0 || num2 == 0) {
				printf("0 으로 나눌 수 없습니다.");
				break;
			}
			double res = div(num1, num2);
			printf("결과: %.2lf", res);
			break;
		default:
			printf("잘못 입력했습니다.");
			break;
		}
		getchar();
		system("cls");
	}
	return 0;
}

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

double div(double a, double b) {
	return a / b;
}