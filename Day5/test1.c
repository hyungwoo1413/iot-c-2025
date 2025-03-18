//#include <stdio.h>
//
///*
//1. 한개의 포인터로 아래 3개의 변수를 모두 출력해보시오.
//printf("%d",i_one); <<-- 이렇게 쓰면 안됨, 포인터 변수로 출력해야함.
//결과 : 1 2 3
//*/
//
//int main() {
//
//    int i_one = 1;
//    int i_two = 2;
//    int i_three = 3;
//
//    int* p[] = { &i_one, &i_two, &i_three };
//    int size = sizeof(p) / sizeof(p[0]);
//
//    for (int i = 0; i < size; i++) {
//        printf("%d ", **(p + i));
//    }
//
//	return 0;
//}