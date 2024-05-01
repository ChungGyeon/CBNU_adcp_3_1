#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//사분면 체크,단 구조체 point를 만들어 사용
struct point{
    int x;
    int y;
};
int quadrant(struct point Pa);
int main(){
    struct point P;
    int result=0;
    printf("점 입력 :");
    scanf("%d %d", &P.x, &P.y);
    result = quadrant(P);
    printf("%d사분면 입니다.",result);
    return 0;
}

int quadrant(struct point Pa){
    if(Pa.x>0 && Pa.y>0){return 1;}
    else if(Pa.x<0 && Pa.y>0){return 2;}
    else if(Pa.x<0 && Pa.y<0){return 3;}
    else if(Pa.x>0 && Pa.y<0){return 4;}
    else {printf("\n0,0입니다.\n");return 0;}
}