#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int r = 47;

	while (1) {
		printf("정수를 입력하세요(1~99): ");
		scanf_s("%d", &num);

		if (r < num) {
			printf("down\n");
		}
		else if(r > num) {
			printf("up\n");
		}
		else {
			printf("정답입니다.\n");
			break;
		}
	}
	
	return 0;
}