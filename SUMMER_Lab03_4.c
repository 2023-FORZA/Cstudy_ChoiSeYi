//5354

#include <stdio.h>

int main(void) {
  int N,J,i,j,k;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&J);
    if(J==1){
      printf("#");
    }
    else{
      for(j=0;j<J;j++){
        printf("#");
      }
      printf("\n");
      for(j=0;j<J-2;j++){
        printf("#");
        for(k=0;k<J-2;k++){
          printf("J");
        }
        printf("#\n");
      }
      for(j=0;j<J;j++){
        printf("#");
      }
    }
    printf("\n\n");
  }
  return 0;
}