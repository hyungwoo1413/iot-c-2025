#include <stdio.h>

int value()
{
	int num;  // �ڷ��� ������
	num = 10;
	int num2 = 10;  // ������ �ʱ�ȭ, 10�� ���ͷ�
	num = num2;
	//100 = num;	// ���ͷ��� lvalue�� ���� �� ����
	char ch = 'A';
	double db = 3.14;

	printf("num�� ��: %d\n", num);
	printf("num2�� ��: %d\n", num2);
	printf("ch�� ��: %c\n", ch);
	printf("ch�� ��: %.2lf\n", db);

	return 0;
}