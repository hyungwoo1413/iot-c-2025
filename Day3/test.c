﻿//#include <stdio.h>
//
///*  */
//
//int main() {
//
//	char str[50] = "abcqdefqpppoqaws";
//	// 포인터를 활용해서 q 값을 찾고, q 를 Q 로 바꾸시오.
//	char* pC = str;
//	printf("%c\n", *(pC+2));
//	
//	while (*pC != NULL) {
//		if (*pC == 'q') {
//			*pC = 'Q';
//		}
//		pC++;
//	}
//
//	/*for (int i = 0; i < sizeof(str); i++) {
//		if (str[i] == 'q') {
//			*(pC + i) = 'Q';
//		}
//	}*/
//	printf("%s", str);
//	
//	// 결과  printf("%s",str) ----> abcQdefQpppoQaws
//	return 0;
//}