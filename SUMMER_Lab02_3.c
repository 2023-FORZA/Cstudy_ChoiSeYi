//2309

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) {
        return -1;
    } else if (num1 > num2) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
  int i, j, height[9], sum=0, over, over_height;
  for(i=0;i<9;i++){
    scanf("%d",&height[i]);
    sum=sum+height[i];
  }
  over=sum-100;

  for(i=0;i<9;i++){
    over_height=over-height[i];
    for(j=0;j<9;j++){
      if(j!=i&&over_height==height[j]){
        height[i]=0;
        height[j]=0;
        break;
      }
    }
    if(height[i]==height[j]){
      break;
    }
  }
  qsort(height, sizeof(height) / sizeof(int), sizeof(int), compare);
  for(i=2;i<9;i++){
    printf("%d\n",height[i]);
  }
  return 0;
}
