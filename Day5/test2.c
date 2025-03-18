//#include <stdio.h>
//
///*
//2. 한개의 포인터로 아래 3개의 변수를 모두 출력해보시오.
//조건 char** 이중포인터 사용
//결과 : one two three
//*/
//
//int main(){
//
//    char* c_one = "one";
//    char* c_two = "two";
//    char* c_three = "three";
//
//    char* cp[] = {c_one, c_two, c_three};
//    char** cpp = cp;
//    int size = sizeof(cp) / sizeof(cp[0]);
//
//    for (int i = 0; i < size; i++) {
//        printf("%s ", *(cp + i));
//    }
//
//    return 0;
//}