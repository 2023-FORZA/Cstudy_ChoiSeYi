#10809

#include <stdio.h>
#include <string.h>

int main(void) {

  char word[100] = {0};
  int s[26], i, j, ch;
  scanf("%s",word);

  for(i=0;i<=26;i++){
    s[i]=-1;
  }
    
  for(i=0;i<=26;i++){
    for(j=0;j<=strlen(word);j++){
      ch = i+97;
      if((char)ch==word[j] & s[i]==-1){
        s[i]=j;
      }
    }
  }
  for(i=0;i<26;i++){
    printf("%d ",s[i]);
  }
  printf("\n");

  
  return 0;
}