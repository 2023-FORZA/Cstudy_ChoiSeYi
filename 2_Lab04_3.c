//1919

#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[1001], str2[1001];
  scanf("%s %s",str1,str2);

  int num=strlen(str1)+strlen(str2);
  
  for(int i=0;i<strlen(str1);i++){
    for(int j=0;j<strlen(str2);j++){
      if(str1[i]==str2[j]){
        str1[i]='0';
        str2[j]=-'1';
        num=num-2;
      }
    }
  }

  printf("%d",num);
  
  return 0;
}