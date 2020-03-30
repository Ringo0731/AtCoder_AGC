#include<stdio.h>

void min_three(long int a,long int b,long int c){
    long  int ans = a * b;
    if(ans >= b * c){
        ans = b * c;
    }
    if(ans >= a * c){
        ans = a * c;
    }
    printf("%ld\n",ans);
}

int main(void){

    long int A,B,C,i;

    scanf("%ld %ld %ld",&A,&B,&C);

    if(A % 2 == 0 || B % 2 == 0 || C % 2 == 0){
        printf("0\n");
        return 0;
    }

    min_three(A,B,C);
    return 0;
}
