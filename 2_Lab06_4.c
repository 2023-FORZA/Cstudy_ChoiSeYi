//3622

#include <stdio.h>

int main(void)
{
  int A, a, B, b, P;
  int c = 0;
  scanf("%d %d %d %d %d",&A,&a,&B,&b,&P);
  if (A + B <= P)
    printf("Yes");

  else if (a >= B && P >= A)
    printf("Yes");

  else if (A <= b && P >= B)
    printf("Yes");

  else
    printf("No");


}