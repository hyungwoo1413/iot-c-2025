//#include <stdio.h>
//
///*
//4. void 포인터 pVoid 만을 사용하여 int, float, char 값을 출력하시오.
//결과 :
//정수: 100
//실수: 3.14
//문자: A
//*/
//
//int main() {
//
//    int i_val = 100;
//    float f_val = 3.14f;
//    char c_val = 'A';
//
//    void* pVoid;
//    pVoid = &i_val;
//    printf("정수: %d\n", *(int*)pVoid);
//    pVoid = &f_val;
//    printf("실수: %.2lf\n", *(float*)pVoid);
//    pVoid = &c_val;
//    printf("문자: %c\n", *(char*)pVoid);
//
//	return 0;
//}