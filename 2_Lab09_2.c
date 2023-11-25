//1652

#include <stdio.h>

int main(void) {
  int N;
  scanf("%d",&N);
  char room[N+1][N+1];
  int i,j;
  int row=0,col=0,seat=0;
  for(i=0;i<N;i++){
    scanf("%s",room[i]);
  }

  for(i=0;i<N;i++){
    seat=0;
    for(j=0;j<N;j++){
      if(room[i][j]=='.'){
        seat++;
      }
      else{
        if(seat>=2){
          row++;
        }
        seat=0;
      }
    }
    if(seat>=2){
      row++;
    }
  }
  for(i=0;i<N;i++){
    seat=0;
    for(j=0;j<N;j++){
      if(room[j][i]=='.'){
        seat++;
      }
      else{
        if(seat>=2){
          col++;
        }
        seat=0;
      }
    }
    if(seat>=2){
      col++;
    }
  }
  
  printf("%d %d",row,col);
  
  return 0;
}