//2693

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
  int T,i,j;
  int **arr;
  scanf("%d",&T);
  arr=(int **)malloc(sizeof(int *) * T);
  
  for(i=0;i<T;i++){
    arr[i]=(int *)malloc(sizeof(int) * 10 );
    for(j=0;j<10;j++){
      scanf("%d",&arr[i][j]);
    }
    qsort(arr[i], 10, sizeof(int), compare);
  }

  for(i=0;i<T;i++){
    printf("%d\n",arr[i][7]);
  }
  
  for (i=0;i<T;i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}