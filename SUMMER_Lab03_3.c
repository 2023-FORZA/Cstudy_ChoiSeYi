//1978

#include <stdio.h>

int main(void) {
  int N, num[101], i, j;
  scanf("%d",&N);
  int pri=N;
  for(i=0;i<N;i++){
    scanf("%d",&num[i]);
  }
  
  for(i=0;i<N;i++){
    int n=num[i];
    if(n==1){
      pri--;
    }
    else{
      for(j=2;j<=n/2;j++){
        if(n%j==0){
          pri--;
          break;
        }
      }
    }
  }
  printf("%d",pri);
  return 0;
}