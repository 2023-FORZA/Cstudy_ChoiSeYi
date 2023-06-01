//1037

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  
  int div[n], i;
  for(i=0;i<n;i++){
    scanf("%d",&div[i]);

  }
  int max = div[0], min = div[0];

  for(i=0;i<n;i++){
    if(div[i]>min)
      min = div[i];
    if(div[i]<max)
      max = div[i];
  }
  
  printf("%d",min*max);
  
  return 0;
}