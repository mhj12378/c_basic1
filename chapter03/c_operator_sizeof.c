#include <stdio.h>

int main (void)

{
    int a = 10;
    double b = 3.4;

    //sizeof() 함수: 가로 안의 값의 크기를 byte 단위로 계산
    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결과괎의 크기 : %d\n", sizeof(1.5+3.4));
    printf("char 자료형의 크기 : %d\n", sizeof(char));
    //영문자는 1글자 1byte
    //한글은 1글자 2byte
}