//2750

#include <stdio.h>

int main(void) {
  int i, j, N, temp;
  int num[1000];
  scanf("%d", &N);

  //입력받아 배열에 저장
  for(i=0;i<N;i++){
    scanf("%d",&num[i]);
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      //작은 숫자가 앞으로 오도록 정렬
      if(num[i]<num[j]){
        temp=num[i]; //temp에 임시 저장
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }

  //출력
  for(i=0;i<N;i++){
    printf("%d\n",num[i]);
  }
  
  return 0;
}