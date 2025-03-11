#include <stdio.h>

int value2()
{
	char ch = 0;  // -128 ~ 127  // signed °¡ »ý·«µÊ
	unsigned char ch2 = 0;  // 0 ~ 255

	unsigned int num;
	num = 123456;
	printf("num: %d\n", num);
	num = -1;
	printf("num: %d\n", num);
	printf("num: %u\n", num);

	return 0;
}