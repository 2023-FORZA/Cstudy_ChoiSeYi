#11720

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,i,sum=0;
  scanf("%d",&n);
  
  int *numPtr = malloc(sizeof(int) * n);

  for(i=0;i<n;i++){
    scanf("%1d",&numPtr[i]);
    sum = sum + numPtr[i];
  }
  printf("%d",sum);
  free(numPtr);
  return 0;
}