//1357

#include <stdio.h>

int rev(int X){
  int X_rev=0;
  while (X != 0) {
    X_rev*= 10;
    X_rev+= X % 10;
    X /= 10;
  }
  return X_rev;
  }

int main(void) {
  int X, Y;
  int X_rev, Y_rev;
  scanf("%d %d",&X,&Y);
  X_rev=rev(X);
  Y_rev=rev(Y);
  printf("%d",rev(X_rev+Y_rev));
  
  return 0;
}