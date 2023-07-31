//1110

#include <stdio.h>

void num_array(int n, int num[]){
  if(n<10){
      num[0]=0;
      num[1]=n;
   }
   else{
       num[0]=n/10;
      num[1]=n%10;
    }
}

int main(void) {
  
  int n, num[2], n1, num1[2], N, Num[2], cycle=0;
  scanf("%d",&n);
  if(n<10){
      num[0]=0;
      num[1]=n;
  }
  else{
      num[0]=n/10;
      num[1]=n%10;
  }
  num_array(n, num);
  num1[0]=num[0];
  num1[1]=num[1];
  
  while(1){
    cycle++;
    N=num1[0]+num1[1]; 
    Num[0]=num1[1];
    Num[1]=N%10;
    if(num[0]==Num[0]&&num[1]==Num[1]){
      break;
    }
    else{
    num1[0]=Num[0];
    num1[1]=Num[1];

    }
  }
  printf("%d",cycle);
  
  return 0;
}