#include<stdio.h>
#include <stdlib.h>
#include "mainpage.h"

int mainpage_p(){
    system("clear"); //[issue]리눅스만 클리어됨, 윈도우 운영체제 대응하는거 필요
    printf("------------------------------------\n");
    for(int i=0; i<10; i++){
        printf("\n");
        if(i==4)printf("        뿌슝파슝 타자연습");
    }
    printf("------------------------------------\n");
    printf("--------------모드 선택-------------\n");
    printf(" 1.일반 타자 모드\n");
    printf(" 2.장문 타자 모드\n");
    printf(" 3.나가기\n");

    int test=0; //입력받는 함수 숫자만 받게 함
    int cnt=0; //여러번 오타 낸거 카운트용
    while(1){
        scanf("%d",&test);
        if(test==1){printf("ㅋㅋ 아직 안만들었지롱\n");break;} //[issue]일반모드 만들면 수정
        else if(test==2){printf("ㅋㅋ 아직 안만들었지롱\n");break;} //[issue]장문모드 만들면 수정
        else if(test==3){printf("ㅋㅋ 다른거 눌러도 지금은 꺼지지롱\n");break;}
        else{printf("1,2,3 중에서만 입력해주세요\n");cnt++;}
        if(cnt>=10){printf("긴급탈출");break;}
    }

   return test;
}