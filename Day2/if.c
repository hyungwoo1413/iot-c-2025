//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int num;
//	srand(time(NULL));
//	int r = rand() % 99 + 1;
//
//	while (1) {
//		printf("정수를 입력하세요(1~99): ");
//		scanf_s("%d", &num);
//		getchar();
//
//		if (r < num) {
//			printf("down");
//		}
//		else if(r > num) {
//			printf("up");
//		}
//		else {
//			printf("정답입니다.\n");
//			break;
//		}
//		getchar();
//		system("cls");
//	}
//	
//	return 0;
//}