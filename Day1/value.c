#include <stdio.h>

int value()
{
	int num;  // 자료형 변수명
	num = 10;
	int num2 = 10;  // 변수의 초기화, 10은 리터럴
	num = num2;
	//100 = num;	// 리터럴은 lvalue에 있을 수 없다
	char ch = 'A';
	double db = 3.14;

	printf("num의 값: %d\n", num);
	printf("num2의 값: %d\n", num2);
	printf("ch의 값: %c\n", ch);
	printf("ch의 값: %.2lf\n", db);

	return 0;
}