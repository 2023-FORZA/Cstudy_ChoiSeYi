//10828

#include <stdio.h>
#include <string.h>

int length = 0;
int stack[100001];

void push(int num){
  stack[length]=num;
  length++;
}

void pop(){
  int i=0;
  if(length!=0){
    printf("%d\n",stack[length-1]);
    length--;
  }
  else printf("%d\n",-1);
}

void size(){
  printf("%d\n",length);
}

void empty(){
  if(length==0) printf("%d\n",1);
  else printf("%d\n",0);
}

void top(){
  if(length!=0) printf("%d\n",stack[length-1]);
  else printf("%d\n",-1);
}

int main(void) {
  int N, i, num;
  char command[10];

  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%s",command);
    if(strcmp(command, "push")==0){
      scanf("%d",&num);
      push(num);
    }
    else if(strcmp(command, "pop")==0) pop();
    else if(strcmp(command, "size")==0) size();
    else if(strcmp(command, "empty")==0) empty();
    else if(strcmp(command, "top")==0) top();
  }

  
  return 0;
}