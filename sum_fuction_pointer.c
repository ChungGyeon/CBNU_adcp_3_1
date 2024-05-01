#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define sdentnum 3
float average1();
int main(){
    float a[sdentnum];
    float b=0;
    for(int i = 0; i<=sdentnum-1; i++){
        scanf("%f",&a[i]);
    }
    b=average1(a,sdentnum);
    printf("평균 결과 : %f",b);
    return 0;
}

float average1(float a[], int num){
    float aver=0;
    for(int i=0; i<=num-1; i++){
        aver+=a[i];
    }
    return aver/num;
}
