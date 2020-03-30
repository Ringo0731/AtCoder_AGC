#include<stdio.h>
#include<string.h>

int main(void){

    char s[100001];
    long int K,i;
    int s_len;

    scanf("%s",s);
    scanf("%ld",&K);

    s_len = strlen(s);
    //K %= 26;

    for(i = 0;i < s_len;i++){
        if(K == 0) break;
        int t = (int)('a' - s[i]);
        if(t < 0) t += 26;
        if(t <= K){
            s[i] += (char)t;
            K -= (long int)t;
            if(s[i] > 'z'){
                s[i] -= 26;
            }
            //printf("s[%ld]の操作 t:%d Kの残り:%ld\n",i,t,K);
        }
    }

    K %= 26;
    s[s_len-1] += K;
    if(s[s_len] > 'z'){
        s[i] -= 26;
    }

    printf("%s\n",s);
    return 0;
}
