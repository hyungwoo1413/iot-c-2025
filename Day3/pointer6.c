//#include <stdio.h>
//
//void printAry(int*, int);
//void scanAry(int*, int);
//
//int main() {
//	int ary[5];
//	int size = sizeof(ary) / sizeof(ary[0]);
//
//	scanAry(ary, size);
//	printAry(ary, size);
//
//	return 0;
//}
//
//void printAry(int* p, int _size)
//{
//	printf("생성 완료: ");
//	for (int i = 0; i < _size; i++) {
//		printf("%d ", *(p+i));
//	}
//
//}
//
//void scanAry(int* p, int _size)
//{
//	for (int i = 0; i < _size; i++) {
//		printf("배열 생성(%d): ", i + 1);
//		scanf_s("%d", p+i);
//	}
//}
