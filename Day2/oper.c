﻿//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n = 30;
//	int res;
//
//	res = (n > 10) && (n < 20);
//	printf("res: %d\n", res); 
//	res = (n > 10) || (n < 20);
//	printf("res: %d\n", res);
//	res = !(n >= 30);
//	printf("res: %d\n", res);
//	res = ~n;
//	printf("res: %d\n", res);
//
//	// 1의 보수
//	// 0000 ... 0001 1110 (30)
//	// 1111 ... 1110 0001 (반전)
//	// 해석
//	// 1111 ... 1110 0001 
//	// 0000 ... 0001 1110 (반전)
//	// 0000 ... 0001 1111 (1을 더함) (-31)
// 
//	// 2의 보수
//	// 0000 ... 0001 1110 (30)
//	// 1111 ... 1110 0001 (반전)
//	// 1111 ... 1110 0010 (1을 더함)
//	// 해석
//	// 1111 ... 1110 0010 
//	// 0000 ... 0001 1101 (반전)
//	// 0000 ... 0001 1110 (1을 더함) (-30)
// 
//	res = n << 1;
//	printf("res: %x\n", res);
//	res = n >> 1;
//	printf("res: %x\n", res);
//
//	int n2 = 143;
//	res = n2 << 1;
//	printf("res: %x\n", res); 
//	res = n2 >> 1;
//	printf("res: %x\n", res);
//
//
//	return 0;
//}