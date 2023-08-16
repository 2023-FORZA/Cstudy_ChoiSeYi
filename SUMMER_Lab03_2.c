//1475

#include <stdio.h>
#include <string.h>
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
  int set[10]={0,};
  int num_69;

  char N[1000001];
  int num,i,j,sets=1;
  scanf("%str",N);
  for(i=0;i<strlen(N);i++){
    num=N[i]-48;
    set[num]++;
  }
  num_69 = set[9]+set[6];
  if(num_69%2==0){
    set[6]=num_69/2;
    set[9]=num_69/2;
  }
  else{
    set[6]=num_69/2+1;
    set[9]=num_69/2+1;   
  }

    qsort(set, sizeof(set) / sizeof(int), sizeof(int), compare);

  printf("%d",set[9]);
  return 0;
}