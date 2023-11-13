//1453

#include <stdio.h>

int main(void) {
  int N, i, j, rejected=0;
  int com[100]={0};

  //손님 수 입력
  scanf("%d",&N);

  //손님 수만큼 반복
  for(i=0;i<N;i++){
    int seat;
    //앉고 싶은 자리 입력
    scanf("%d", &seat);
      
    // 해당 자리에 사람이 없으면 앉고, 있으면 거절
    if(com[seat-1]==0)
      com[seat-1]=1;//앉음
    else
      rejected++;//거절
  }
  printf("%d",rejected);
  return 0;
}