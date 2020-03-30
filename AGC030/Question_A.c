#include<stdio.h>

int main(void){

    //A:解毒剤入りのおいしくないクッキー
    //B:解毒剤入りの美味しいクッキー
    //C:毒入りの美味しいクッキー
    int A,B,C,result;
    
    scanf("%d %d %d",&A,&B,&C);

    if(A + B + 1 >= C){
        result = B + C;
    }else{
        result = A + 2 * B + 1;
    }

    printf("%d",result);
    return 0;
}