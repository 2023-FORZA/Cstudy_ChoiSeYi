#2276

#include <stdio.h>

void quickSort(int arr[], int L, int R){
      int left = L, right = R;
      int pivot = arr[(L + R) / 2];   
      int temp;
      do
      {
        while (arr[left] < pivot)
            left++;
        while (arr[right] > pivot) 
            right--;
        if (left<= right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
            left++;
            right--;
        }
      } while (left<= right);     
 

    if (L < right)
        quickSort(arr, L, right);    
 
    if (left < R)
        quickSort(arr, left, R);    
}

int binary_search(int arr[], int n, int num) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == num) {
            return 1;
        } else if (arr[mid] < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0;
}

int main(void) {
  int T, N, M, note2, i, j;
  
  scanf("%d",&T);
  for(i=0;i<T;i++){
    scanf("%d",&N);
    int note1[N];
    for(j=0;j<N;j++){
      scanf("%d",&note1[j]);
    }
    quickSort(note1,0,N-1);
    
    scanf("%d",&M);
    for(j=0;j<M;j++){
      scanf("%d",&note2);
      printf("%d\n",binary_search(note1, N, note2))
    }
  }

  
  return 0;
}