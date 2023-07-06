#7568

#include <stdio.h> 

int main(void) {
  int N, i, j, k;
  int x[50]={0,};
  int y[50]={0,};
  
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d %d",&x[i],&y[i]);
  }
  
  for(i=0;i<N;i++){
    k=0;
    for(j=0;j<N;j++){
      if(x[i]<x[j]&&y[i]<y[j]){
        k++;
      }
    }
    printf("%d ",k+1);

  }
  return 0;
}