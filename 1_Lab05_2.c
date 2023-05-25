//10807

#include <stdio.h>

int main(void) {
  int N,v,i,a;
  scanf("%d",&N);
  int num[N];
  for(i=0;i<N;i++){
    scanf("%d",&num[i]);
  }
  scanf("%d",&v);  
  for(i=0;i<N;i++){
    if(num[i]==v){
      a++;
    }
  }  
  printf("%d",a);
  
  return 0;
}