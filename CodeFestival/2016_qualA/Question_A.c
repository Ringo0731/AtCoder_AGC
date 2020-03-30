#include<stdio.h>

int main(void){
    char s[13];
    int i;
    scanf("%s",s);
    
    for(i = 0;i < 4;i++){
        printf("%c",s[i]);
    }
    printf(" ");
    for(i = 4;i < 12;i++){
        printf("%c",s[i]);
    }

    printf("\n");
    return 0;
}
