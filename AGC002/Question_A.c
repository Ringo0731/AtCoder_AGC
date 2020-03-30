#include<stdio.h>
#include<stdlib.h>

int main(void){
  
  long int a,b;
  
  scanf("%ld %ld",&a,&b);
  
  if(a <= 0 && b >= 0){
    printf("Zero");
  }else if(a > 0 && b > 0){
    printf("Positive");
  }else{
    if(abs(a - b) % 2 ==0){
      printf("Negative");
    }else{
      printf("Positive");
    }
  }
  return 0;
}

