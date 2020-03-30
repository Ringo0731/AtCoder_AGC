#include<stdio.h>

int main(void){

    int H,W,A,B,i,j;

    scanf("%d %d %d %d",&H,&W,&A,&B);

    for(i = 1;i <= H;i++){
        for(j = 1;j <= W;j++){
            if(i <= B){
                (j <= A) ? printf("0") : printf("1");
            }else{
                (j <= A) ? printf("1") : printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}