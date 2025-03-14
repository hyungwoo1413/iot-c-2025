//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "lemon";
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n\n", str2);
//
//	strcpy(str, str2);  // str(복사, 원본) : str = str2
//
//	printf("str: %s\n", str);
//	printf("str2: %s\n\n", str2);
//
//	strcpy(str, "banana");
//	printf("str: %s\n\n", str);
//
//	strcpy(str, ps);
//	printf("str: %s\n", str);
//
//	// strcpy(&ps, str2);
//	// printf("ps: %s\n", &ps);
//
//	strncpy(str, "apple", 2);  // 복사할 문자개수를 설정
//	printf("str: %s\n", str);
//
//
//	return 0;
//}