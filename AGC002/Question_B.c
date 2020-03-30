#include<stdio.h>

#define MAX_VAL 100002

int main(void){

    int i,N,M,x[MAX_VAL],y[MAX_VAL],possibility[MAX_VAL],ball_num[MAX_VAL],ans = 0;
    
    scanf("%d %d",&N,&M);
    for(i = 1;i <= M;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i = 1;i <= N;i++){
        possibility[i] = 0;
        ball_num[i] = 1;
    }
    possibility[1] = 1;

    for(i = 1;i <= M;i++){
        ball_num[x[i]]--;
        ball_num[y[i]]++;
        if(possibility[x[i]] == 1){
            possibility[y[i]] = 1;
        }
        if(ball_num[x[i]] == 0 && possibility[x[i]] == 1){
            possibility[x[i]] = 0;
        }
    }

    for(i = 1;i <= N;i++){
        //printf("possibility[%d]:%d\n",i,possibility[i]);
        ans += possibility[i];
    }

    printf("%d\n",ans);
    return 0;
}
