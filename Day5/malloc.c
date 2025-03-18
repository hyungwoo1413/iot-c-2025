//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    char* p[5];  // 문자열을 저장할 포인터 배열
//    char str[100]; // 사용자 입력을 위한 임시 배열
//
//    // 메모리 할당: 각 문자열에 대해 100개의 문자를 저장할 공간을 할당
//    for (int i = 0; i < 5; i++) {
//        p[i] = (char*)malloc(100 * sizeof(char)); // 각 문자열에 대한 메모리 할당
//        if (p[i] == NULL) {
//            printf("메모리 할당 실패\n");
//            return 1; // 할당 실패 시 종료
//        }
//    }
//
//    // 5개의 문자열 입력 받기
//    printf("5개의 문자열을 입력하세요:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("문자열 %d: ", i + 1);
//        fgets(p[i], 100, stdin); // 사용자로부터 문자열 입력 받기
//        // 입력받은 문자열에서 끝의 개행문자 제거
//        p[i][strcspn(p[i], "\n")] = '\0';
//    }
//
//    // 입력 받은 문자열 출력하기
//    printf("\n입력된 문자열들:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("문자열 %d: %s\n", i + 1, p[i]);
//    }
//
//    for (int i = 0; i < 5; i++) {
//        free(p[i]);
//    }
//
//    return 0;
//}
