#include<stdio.h>

int main(void){

    long long int N,A,B,ans;

    scanf("%lld %lld %lld",&N,&A,&B);

    if((B-A)%2 == 0){
        ans = (B-A)/2;
    }else{
        //if((B-A) < 3) ((N-A) < (B-1)) ? (ans = N-A) : (ans = B-1);
        //else{
            if((A-1) < (N-B)) ans = A+(B-A-1)/2;
            else ans = (N-B)+1+(N-(A+(N-B)+1))/2;
        //}
    }

    printf("%lld\n",ans);
    return 0;
}
