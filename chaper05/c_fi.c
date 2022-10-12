/**
 * if문(제어문) 기본문법
 * 
 * if(조건) {
 * 실행문
 * }else if(조건) {
 * 실행문
 * }else if(조건) {
 * 실행문
 * }else if(조건) {
 * 실행문
 * }else  {
 * 실행문
*/
#include <stdio.h>

int main (void){
    int a = 20;
    int b = 0;
    //조건을 보고 
    // 참(true) 블룩문 안에 있는 코드 실행
    //거짓(fasle) 다음으로 넘어감
    if(a > 30) {
        printf("a가 30보다 커요!");
    }
}
