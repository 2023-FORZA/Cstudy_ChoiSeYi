//23055

#include <stdio.h>

int main(void) {
  int N;
  scanf("%d",&N);
  
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((i == 0) || (i == N - 1))
				printf("*");
			else if ((j == 0) || (j == N - 1))
				printf("*");
			else if ((i == j)||(i==N-1-j))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
  
  return 0;
}