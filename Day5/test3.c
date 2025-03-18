//#include <stdio.h>
//
///*
//3. 포인터 연산을 이용하여 배열의 모든 요소를 출력해보시오.
//배열명을 직접 사용하지 않고 포인터를 활용해야 한다.
//결과 : 10 20 30 40 50
//*/
//
//int main() {
//
//    int arr[] = { 10, 20, 30, 40, 50 };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}