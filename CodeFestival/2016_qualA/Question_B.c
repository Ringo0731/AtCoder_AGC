#include<stdio.h>

int main(void){

    int N,a[100001],i,ans=0;

    scanf("%d",&N);
    for(i = 1;i <= N;i++){
        scanf("%d",&a[i]);
    }

    for(i = 1;i <= N;i++){
        if(a[a[i]] == i){
            ans++;
        }
    }

    printf("%d\n",ans/2);
    return 0;
}
