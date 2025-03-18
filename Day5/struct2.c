//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct MyStruct{
//	char name[20];
//	int age;
//	double height;
//	char* str;
//}MYST;
//
//int main() {
//	MYST s;
//
//	strcpy(s.name, "이형우");
//	s.age = 30;
//	s.height = 177.5;
//
//	s.str = (char*)malloc(sizeof(char)*100);
//	printf("인사말: ");
//	gets(s.str);
//
//	printf("이름: %s\n", s.name);
//	printf("나이: %d\n", s.age);
//	printf("키: %.1lf\n", s.height);
//	printf("인사말: %s\n", s.str);
//	
//	free(s.str);
//
//	return 0;
//}