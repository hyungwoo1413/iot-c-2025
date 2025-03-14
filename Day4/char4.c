//#include <stdio.h>
//
//void myStrInput(char*, int);
//
//int main() {
//
//	char str[100];
//    int size = sizeof(str);
//
//	myStrInput(str, size);
//	printf("입력한 문자열: %s\n", str);
//
//	return 0;
//}
//
//void myStrInput(char* p, int size) {
//
//    int i = 0;
//
//    while (1) {
//        p[i] = getchar();
//
//        if (p[i] == '\n' || i == (size - 1)) break;
//
//        i++;
//    }
//    p[i] = NULL;
//}