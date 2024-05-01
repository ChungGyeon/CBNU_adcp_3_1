#include <stdio.h>
#include <string.h>

int main(void){
//2차원배열이 주어지고 가로합 세로합을 구하는 프로그램을 만들기 단, 포인트배열사용
int a[2][3]={
    {12,23,34},
    {20,30,40}
};
char aa[10];
char (*p)[10];
char *c[]={"apple","apple2"};
p=&aa;
strcpy(aa,"asdasd");
printf("%s\n",p[0]);

/*
for(int i=0; i<=3-1; i++){
    sum_wide+=*(a[0]+i);
    printf(": %d\n",sum_vertical);
}
printf("전체 수평 전체 더한 값 : %d\n",sum_wide);

for(int i=0; i<=2-1; i++){
    sum_vertical=sum_vertical+**(a+i);
}
printf("수직 전체 더한 값 : %d\n",sum_vertical);

for(int j=0; j<2; j++){
    sum_wide=0;
    for(int i=0; i<=3-1; i++){
    sum_wide+=*(a[j]+i);
}
printf("%d행 다 더한 값:%d\n",j,sum_wide);
}
for(int j=0; j<=2; j++){
    sum_vertical=0;
    for(int i=0; i<2; i++){
    sum_vertical+=*(*(a+i)+j);
}
printf("%d열 다 더한 값:%d\n",j,sum_vertical);
}*/
/*완성
for(int i=0; i<2; i++){
    sum_wide=0;
    for(int j=0; j<3; j++){
        printf("%d ",*(a[i]+j)); //원래 값들 출력
        sum_wide+=*(a[i]+j);
    }
    printf("%d",sum_wide); //수평값들 출력
    printf("\n");
}
for(int j=0; j<=2; j++){
    sum_vertical=0;
    for(int i=0; i<2; i++){
    sum_vertical+=*(*(a+i)+j);
}
printf("%d ",sum_vertical); //수직 값들 더한거 출력
}
*/
return 0;

}
