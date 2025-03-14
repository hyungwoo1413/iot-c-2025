//#include <stdio.h>
//
//
//int main() {
//	int ary[4] = { 1,2,3,4 };
//
//	int ary2[3][2] = { { 1,2 },
//					   { 3,4 },
//					   { 5,6 } };
//
//	int ary3[3][4] = { {1,2},
//					   {3,4,5},
//					   {6,7,8,9} };
//
//	int ary4[3][2] = { 1,2,3,4,5,6 };
//
//	int ary5[][4] = { {1,2,3,4}, 
//					  {5,6,7,8} };
//
//	int ary6[3][4];
//	int ch;
//	int sum=0;
//	int i;
//	int j;
//	int count = 1;
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("점수입력(%d): ",count++);
//			ary6[i][j] = scanf_s("%d", &ch, sizeof(ch));
//			sum += ch;
//		}
//	}
//	printf("평균: %d", sum / (i * j));
//
//	return 0;
//}