#include <stdio.h>

/**
 * for 문: 초기식, 조건식, 중간식으로 구성
 *   - 반복횟수를 세는 변수(i)는 반복문
 *     안에서 변경 금지(개발자 규칙)
*/
int main (void) {
    int a = 1;

    //반복횟수가 정해짐
    // → 반복횟수 count : i(index) 변수
    // i = 0, 1, 2 → 3번반복
    // i = 0, 1, 2,... ,9 → 9번반복
    for (int i=1; i<10; i++) { //(초기식(더이상실행 x) 조건식 증감식)
        a = a * 2;
        // i = i + 1; X
    }
    printf("a : %d\n", a);
}