//10845

#include <stdio.h>
#include <string.h>

int que[10000];
int que_size=0;

void push(int data){
  que[que_size++]=data;
}
void pop(){
  int i;
  if(que_size>0){
    printf("%d\n",que[0]);
    for(i=0;i<que_size-1;i++){
      que[i]=que[i+1];
    }
    que_size--;
    }
  else
    printf("%d\n",-1);
  }

void size(){
  printf("%d\n",que_size);
}
void empty(){
  if(que_size>0)
    printf("%d\n",0);
  else
    printf("%d\n",1);
}
void front(){
  if(que_size>0)
    printf("%d\n",que[0]);
  else
    printf("%d\n",-1);
}
void back(){
  if(que_size>0)
    printf("%d\n",que[que_size-1]);
  else
    printf("%d\n",-1);
}

int main(void) {
  int N, i;
  scanf("%d",&N);
  int que[N];
  char command[6];
  for(i=0;i<N;i++){
    scanf("%s",command);
    if(command[3]=='h'){
      int data;
      scanf("%d",&data);
      push(data);
    }
    else if(command[1]=='o'){
      pop();
    }
    else if(command[0]=='s'){
      size();
    }
    else if(command[0]=='e'){
      empty();
    }
    else if(command[0]=='f'){
      front();
    }
    else if(command[0]=='b'){
      back();
    }
  }
  return 0;
}
