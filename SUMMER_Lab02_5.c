//7482

#include <stdio.h>

int main(void) {
  int n,i;
  double a,b;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%lf",&a);
    b=a/6;
    printf("%.10lf\n",a/6);
  }
  
  return 0;
}