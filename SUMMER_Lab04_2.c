//2941

#include <stdio.h>
#include <string.h>

int main(void) {
  char alphabet[101];
  int i=0, num=0;
  scanf("%s",alphabet);

  while(i<strlen(alphabet)){
    if(alphabet[i]=='c'||alphabet[i]=='s'||alphabet[i]=='z'){
      if(alphabet[i+1]=='='||alphabet[i+1]=='-'){
        i=i+2;
        num++;
        continue;
      }
      else{
        i++;
        num++;
        continue;
      }
    }
    if(alphabet[i]=='l'||alphabet[i]=='n'){
      if(alphabet[i+1]=='j'){
        i=i+2;
        num++;
        continue;
      }
      else{
        i++;
        num++;
        continue;
      }
    }
    if(alphabet[i]=='d'){
      if(alphabet[i+1]=='z'&&alphabet[i+2]=='='){
        i=i+3;
        num++;
        continue;
      }
      else if(alphabet[i+1]=='-'){
        i=i+2;
        num++;
        continue;
      }
      else{
        i++;
        num++;
        continue;
      }
    }
    else{
      i++;
      num++;
      continue;
    }
  }
  
  printf("%d",num);
  
  return 0;
}