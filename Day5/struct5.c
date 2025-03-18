//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct vision {
//	double left;
//	double right;
//}Vision;
//
//Vision exchange(Vision);	// 함수 원형
//
//int main() {
//	
//	Vision rot;
//
//	printf("시력 입력 (왼쪽 오른쪽)>> ");
//	scanf("%lf %lf", &rot.left, &rot.right);
//
//	rot = exchange(rot);
//	printf("바뀐 시력: %.1lf, %.1lf\n", rot.left, rot.right);
//
//	return 0;
//}
//
//Vision exchange(Vision v) {
//	Vision ch_rot;
// 
//	ch_rot.left = v.right;
//	ch_rot.right = v.left;
//
//	return ch_rot;
//}