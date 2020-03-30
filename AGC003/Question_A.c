#include<stdio.h>
#include<string.h>

int main(void){

    char S[1001];
    int i,lenth,N_num = 0,W_num = 0,S_num = 0,E_num = 0;

    scanf("%s",S);
    lenth = strlen(S);

    for(i = 0;i < lenth;i++){
        switch(S[i]){
            case 'N':
                N_num++;
                break;
            case 'W':
                W_num++;
                break;
            case 'S':
                S_num++;
                break;
            case 'E':
                E_num++;
                break;
        }
    }

    if(N_num == S_num && W_num == E_num){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
