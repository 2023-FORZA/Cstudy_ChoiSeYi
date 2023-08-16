//1225

#include <stdio.h>
#include <string.h>

int main(void) {
  char A[10001], B[10001];
  int i, j, a, b; 
  long long sum=0;
  scanf("%s %s",A,B);

  for(i=0;i<strlen(A);i++){
    a=(int)A[i]-48;
    for(j=0;j<strlen(B);j++){
      b=(int)B[j]-48;
      sum=sum+a*b;
    }
  }

  printf("%lld",sum);

  return 0;
}