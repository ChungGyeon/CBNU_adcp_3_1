#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int relay(int a);
int main(){
    /*
    //int형 포인터변수pi에 int형 원소3개를 저장할 수 이쓴ㄴ 배열공간을 할당하여 1,3,5를 저장하는 문장
    int a[]={100,200,300};
    int *p=NULL;
    p=a;
    printf("주소값: %p, 데이터값: %d\n",&a[0],a[0]);
    printf("-------\n");
    
    //printf("주소값: %p, 데이터값: %d\n",p,*p+1);  //주소변경x a[0]의 값이 1 증가만 됨
    //printf("주소값: %p, 데이터값: %d\n",p,*(p+1));  //주소변경x a[1]의 값이 출력만 됨
    //printf("주소값: %p, 데이터값: %d\n",p,*p++); //주소변경o 값을 출력 후 a[1]의 값으로 변경됨
    //printf("주소값: %p, 데이터값: %d\n",p,*++p);    //주소변경o 값을 a[1]의 값으로 변경 후 출력함
    //printf("주소값: %p, 데이터값: %d\n",p,(*p)++); //주소변경x 값을 출력 후 a[0]의 값을 1증가 시킴
    //printf("주소값: %p, 데이터값: %d\n",p,++(*p)); //주소변경x a[0]의 값을 1 증가 후 출력
    printf("-----\n");
    printf("주소값: %p, 데이터값: %d\n",p,*p);
    */
   /*int i=10;
   int *pi=&i;
   printf("i=%d, pi=%p\n",i,pi);
   *pi++;
   printf("i=%d, pi=%p\n",i,pi);
   (*pi)++;
   printf("i=%d, pi=%p\n",i,pi);*/
   int a,b;
   a=10;
   b=relay(a);
   printf("%d",b);
    return 0;
}
int relay(int a){
    int b;
    if(a<=1){return 1;}
    return a+relay(a-1);
}
//*p+1
//*(p+1)
//*p++
//(*p)++
//*++p