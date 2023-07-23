#1085

#include <stdio.h>

int main(void) {
  int x,y,w,h,dis[4],min,i;

  scanf("%d %d %d %d",&x,&y,&w,&h);
  dis[0]=x;
  dis[1]=y;
  dis[2]=w-x;
  dis[3]=h-y;
  min=dis[0];
  for(i=0;i<4;i++){
    if(min>dis[i]){
      min=dis[i];
    }
  }
  printf("%d",min);

  return 0;
}