//2851

#include <stdio.h>

int main(void) {
  int mushroom[10], sum1=0, sum2;
  int i;
  for(i=0;i<10;i++){
    scanf("%d",&mushroom[i]);
  }

  i=0;
  
  while(sum1<=100){
    sum1=mushroom[i]+sum1;
    i++;
  }

  sum2=sum1-mushroom[i-1];

  int sum1_dif=(sum1-100)*(sum1-100), sum2_dif=(sum2-100)*(sum2-100);
  if(sum1_dif==sum2_dif){
    printf("%d\n",sum1);
  }
  else if(sum1_dif<sum2_dif){
    printf("%d\n",sum1);    
  }
  else{
    printf("%d\n",sum2);
    
  }

  
  return 0;
}