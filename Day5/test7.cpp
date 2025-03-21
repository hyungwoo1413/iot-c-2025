﻿#include <iostream>
using namespace std;

/*
6. 배열 포인터를 활용하여 2차원 배열을 출력해보자.
결과 :
1 2 3 4
5 6 7 8
9 10 11 12
*/

int main() {
    int rows, cols;

    int Ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int(*pAry)[4] = Ary;    // 6-2. 이게 무슨 뜻인지 각자의 생각을 주석으로 적어보시오.

    // int 자료형(4byte) 4개를 묶어놓은 배열(16byte)을 가리키는 포인터
    // 즉, 16byte(한 행) 단위으로 포인터가 이동한다.

    cout << "행의 수: ";
    cin >> rows;
    cout << "열의 수: ";
    cin >> cols;
    int* p = new int[rows * cols];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", pAry[i][j]);
        }
        printf("\n");
    }
    return 0;
}