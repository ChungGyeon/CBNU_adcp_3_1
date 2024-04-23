#include <stdio.h>
#include "mainpage.h" //mainpage_p로 사용함
int main(){
    int a = mainpage_p();
    printf("\n테스트함수에서 a 출력해봄\n");
    printf("%d",a);
    return 0;
}