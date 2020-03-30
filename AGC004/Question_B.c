#include<stdio.h>

#define MAX_VAL 2000

int main(void){

    int N,i,easiest_get_num;
    long int x,a[MAX_VAL],ans,easiest_get;

    scanf("%d %ld",&N,&x);
    for(i = 0;i < N;i++){
        scanf("%ld",&a[i]);
    }

    easiest_get = a[0];
    //easiest_get_num = 0;
    for(i = 1;i < N;i++){
        if(a[i] < easiest_get){
            easiest_get = a[i];
        }
    }

    ans = x * (N - 1) + N * easiest_get;

    printf("%ld\n",ans);
    return 0;
}