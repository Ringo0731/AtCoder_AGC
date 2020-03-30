#include<stdio.h>

void find_nextWhite(int now_i,int now_j,int h,int w,char S[101][101], int *next_i,int *next_j);
int Search_Root(int i,int j,int h,int w,char S[101][101],int ans);

int main(void){

    int H,W,i,j,ans = 0;
    char s[101][101];

    scanf("%d %d",&H,&W);
    for(i = 0;i < H;i++){
        for(j = 0;j < W;j++){
            scanf("%c",&s[i][j]);
        }
    }

    ans = Search_Root(0,0,H,W,s,ans);

    printf("%d\n",ans);
    return 0;
}

int Search_Root(int i,int j,int h,int w,char S[101][101],int ans){
    if(S[i][j+1] == '.'){
        printf("Go left\n");
        Search_Root(i,j+1,h,w,S,ans);
    }else if(S[i+1][j] == '.'){
        printf("Go down\n");
        Search_Root(i+1,j,h,w,S,ans);
    }else if(i == h-1 && j == w-1){
        printf("Reached!\n");
        return ans;
    }else{
        int next_i,next_j;
        find_nextWhite(i,j,h,w,S,&next_i,&next_j);
        ans += (next_i - i) + (next_j - j);
        Search_Root(next_i,next_j,h,w,S,ans);
    }
}

void find_nextWhite(int now_i,int now_j,int h,int w,char S[101][101], int *next_i,int *next_j){
    for(int j = now_j;j < w;j++){
        for(int i = h-1;i >= now_i;i--){
            if(S[i][j] == '.'){
                *next_i = i;
                *next_j = j;
                return;
            }
        }
    }
}