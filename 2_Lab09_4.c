//1100

#include <stdio.h>

int main(void) {
  char chess[9][9];
  int white=0;
  for(int i=0;i<8;i++){
    scanf("%s",chess[i]);
  }
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(((i+j)%2==0)&&chess[i][j]=='F'){
        white++;
      }
    }
  }
  printf("%d",white);
}