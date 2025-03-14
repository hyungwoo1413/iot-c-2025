//#include <stdio.h>
//
//int main() {
//	int n = 100;
//	int* pn;
//	int** ppn; // 2중 포인터
//
//	pn = &n; // 변수 n의 주소를 저장
//	ppn = &pn; // 포인터변수 pn의 주소를 저장
//
//	printf("n: %d\t\t\t n주소: %p\n", n, &n);
//	printf("pn: %p\t pn주소: %p\t pn값: %d\n", pn, &pn, *pn);
//	printf("ppn: %p\t ppn주소: %p\t *ppn: %p\t ppn값: %d\n", ppn, &ppn, *ppn, **ppn);
//
//
//	return 0;
//}