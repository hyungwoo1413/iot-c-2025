# include <stdio.h>

int value4()
{
	char str[10] = "banana";  // ����Ÿ�� �迭����

	printf("str: %s\n", str);
	printf("str[0]: %c\n", str[0]);
	printf("str[1]: %c\n", str[1]);
	printf("str[5]: %c\n", str[5]);
	// printf("str[6]: %c\n", str[6]);  // ���ڿ� ������ null���ڰ� �´�

	return 0;
}