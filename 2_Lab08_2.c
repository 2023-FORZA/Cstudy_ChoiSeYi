//1864

#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {
  char word[9];
  int i, j, num;
  
  while (1) {
    scanf("%s", word);
    if (strcmp(word, "#") == 0) {
      break;
    }
    num=0;
    for(i=0;i<strlen(word);i++){
      int ch = word[i];
      if(ch=='-')
        ch=0;
      if(ch=='\\')
        ch=1;
      if(ch=='(')
        ch=2;
      if(ch=='@')
        ch=3;
      if(ch=='?')
        ch=4;
      if(ch=='>')
        ch=5;
      if(ch=='&')
        ch=6;
      if(ch=='%')
        ch=7;
      if(ch=='/')
        ch=-1;
      num+=ch*(pow(8,strlen(word)-1-i));
    }
    printf("%d\n",num);  
  }
  return 0;
}