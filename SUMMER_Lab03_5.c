//9550

#include <stdio.h>

int main(void) {
  int T,N,K,i,j,candy[101],k,num;
  scanf("%d",&T);
  for(i=0;i<T;i++){
    num=0;
    scanf("%d %d",&N,&K);
    for(j=0;j<N;j++){
      scanf("%d",&candy[j]);
      k=candy[j]/K;
      num=num+k;
    }
    printf("%d\n",num);
  }

  return 0;
}