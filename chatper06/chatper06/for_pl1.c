#include <stdio.h>

//1~10�� ���� ���� ���
int main (void) {
    int sum = 0;  //���� ����
    
    for (int i=1; i<=10; i++){
        sum = sum + i; //sum+=i;
    }
    //�ۼ��غ�����.(for�� Ȱ��)
    //for�� Ȱ���ؼ� 1~10���� �����ϴ� �ڵ��ۼ�
    printf("���� ����: %d\n", sum);
}