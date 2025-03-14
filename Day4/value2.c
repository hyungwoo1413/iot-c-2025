//#include <stdio.h>
//
//void incFunc();
//void incFunc2();
//
//int main() {
//
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		incFunc2();
//	}
//	//scnt++; //외부에서 정적변수의 접근 불허
//	return 0;
//}
//
//void incFunc() {
//	int cnt = 0;
//	cnt++;
//	printf("cnt: %d ", cnt);
//}
//
//void incFunc2() {
//	static int scnt;	// 정적 지역 변수
//	scnt++;
//	printf("scnt: %d\n", scnt);
//}