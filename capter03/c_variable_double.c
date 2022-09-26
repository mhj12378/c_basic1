/**
 * 실수형
 *   + float(7), double(15), long double(15이상)
 *   + 값의 범위보다 유효숫자(소수점) 갯수가 중요
 *   + 정수형은 기본으로, 실수형은 꼭 필요한 경우만 사용
 *   + 실수형은 유효 숫자가 많은 double 형을 기본으로 사용
 * 
*/

#include <stdio.h>

int main(void)
{
    float ft = 1.234567890123456789;       // 소수점 18개
    double db = 1.2345567890123456789;  // 소수점 18개
    //예상출력 1.234556789012345678900
    printf("float형 변수 값 : %.20f\n", ft);
    printf("double형 변수 값 : %.20f\n", db); 
}