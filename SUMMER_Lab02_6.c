//10820

#include <stdio.h>
#include <string.h> 

void analysis(char c, int* small, int* big, int* num, int* space){
  if(c>=65&&c<=90){
    *big=*big+1;
  }
  else if(c>=97&&c<=122){
    *small=*small+1;
  }
  else if(c==32){
    *space=*space+1;
  }
  else if(c>=47&&c<=58){
    *num=*num+1;
  }
}

int main(void) {
  char str[101];
  while(gets(str)!='\0'){
    int small=0, big=0, num=0, space=0, i;
    for(i=0;i<strlen(str);i++){
      analysis(str[i],&small, &big, &num, &space);
    }
  printf("%d %d %d %d\n",small, big, num, space);
  }
  
  
  return 0;
}
