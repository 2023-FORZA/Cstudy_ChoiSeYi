//2562

#include <stdio.h>

int main(void) {
  int num[9], i;
  for(i=0;i<9;i++){
  scanf("%d",&num[i]);
  }
  int max = num[0], index=0;
  for(i=0;i<9;i++){
    if(max<=num[i]){
      max=num[i];
      index=i;
    }
  }
  printf("%d\n%d\n",max,index+1);
  
  return 0;
}