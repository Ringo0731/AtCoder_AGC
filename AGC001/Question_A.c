#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){
    
    int N,i,L[200],result = 0;

    scanf("%d",&N);
    for(i = 0;i < 2*N;i++){
        scanf("%d",&L[i]);
    }

    qsort(L,2*N,sizeof(int),compare_int);
    for(i = 0;i < 2*N;i += 2){
        (L[i] < L[i + 1]) ? (result += L[i]):(result += L[i+1]);
    }

    printf("%d",result);
    return 0;
}