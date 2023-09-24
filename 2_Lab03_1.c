//1440

#include <stdio.h>

int main(void) {
  int time[3];
  int hour=0, equal=1;

  scanf("%d:%d:%d",&time[0],&time[1],&time[2]);

  for(int i;i<3;i++){
    if(time[i]>=1 && time[i] <= 12) hour++;
    if(time[i]>=60) {
      printf("%d",0);
      return 0;
    }
    for(int j=i+1;j<3;j++){
      if(time[i]==time[j]) equal++;
    }
  }
  if(hour==0){
    printf("%d",0);
    return 0;
  }
  printf("%d", hour * 2);
  
  return 0;
}