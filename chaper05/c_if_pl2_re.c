#include <stdio.h>

//학점 계산기 - 리펙토링
int main (void){ 
    //1번: 사용자로부터 점수 입력
    int score;
    char grade;

    printf("점수:");
    scanf("%d", &score);
    
    if(score >= 0 && score <= 100){
        // 2. 점수로부터 등급(A, B, C..) 판단
        if(score <= 100 && score >= 91) { //SCORE: 100점(91~100)
            grade = 'A';
        } else if (score >= 81) {         //SCORE: 90점(81~100)
            grade = 'B';
        } else if (score >= 71) {         //SCORE: 80점(71~80)
            grade = 'C';
        } else if (score >= 61) {         //SCORE: 70점(61~70)
            grade = 'D';
        } else {                          //SCORE: 60점(0~60)
            grade = 'F';
        }
        // 3. 점수와 등급을 출력
        printf("학생의 점수는%d점으로 %c학점 입니다", score, grade);
    } else {
        //점수가: 0점 미만 또는 100점 초과
        printf("ERROR: 0~100점 사이에 값을 입력하세요.");
    }
} 