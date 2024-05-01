#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[100];
    char *cl[]={"im crying","its not true"};
    int bb=strlen(cl[0]);
    printf("%d",bb);
    /*
    printf("입력 ㄲ\n");
    fgets(a, sizeof(a), stdin); 
    if (a[strlen(a) - 1] == '\n')
        a[strlen(a) - 1] = '\0';
    int qq=strcmp(a,cl[0]);
    if(qq==0){printf("맞아");}
    else{printf("아냐");}*/
    return 0;
}