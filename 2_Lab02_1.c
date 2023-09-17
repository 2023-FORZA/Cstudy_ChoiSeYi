//1546

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N,i;
  scanf("%d",&N);

  float* score = (float*)malloc(sizeof(float) * N);
  
  for(i=0;i<N;i++){
  scanf("%f",&score[i]);
  }

  
  int max=0;
  for(i=0;i<N;i++){
    if(max<=score[i]){
      max=score[i];
    }
  }

  float sum=0;
  for(i=0;i<N;i++){
    score[i]=score[i]/max*100;
    sum=score[i]+sum;
  }

  printf("%f",sum/N);
  
  
  return 0;
}