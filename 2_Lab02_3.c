//12759

#include <stdio.h>

int main(void) {
  int tictactoe[3][3] = {0};
  int currentPlayer, move, row, col, winner = 0, i;

  scanf("%d", &currentPlayer);

  for (move = 1; move <= 9; move++) {
    scanf("%d %d", &row, &col);
    tictactoe[row - 1][col - 1] = currentPlayer;

    if (move >= 5) {
      //세로 확인
      for (i = 0; i < 3; i++) {
        if (tictactoe[0][i]==currentPlayer&&tictactoe[1][i]==currentPlayer&&tictactoe[2][i]==currentPlayer) {
          winner = currentPlayer;
          break;
        }
      }
      //가로 확인
      for (i = 0; i < 3; i++) {
        if (tictactoe[i][0]==currentPlayer&&tictactoe[i][1]==currentPlayer&&tictactoe[i][2]==currentPlayer) {
          winner = currentPlayer;
          break;
        }
      }
      if (tictactoe[0][0]==currentPlayer&&tictactoe[1][1]==currentPlayer&&tictactoe[2][2]==currentPlayer) {
        winner = currentPlayer;
        break;
      }
      //대각선 확인
      if (tictactoe[0][2]==currentPlayer&&tictactoe[1][1]==currentPlayer&&tictactoe[2][0]==currentPlayer) {
        winner = currentPlayer;
        break;
      }
    }
    currentPlayer = (currentPlayer == 1) ? 2 : 1;

    if (winner != 0)
      break;
  }

  printf("%d\n", winner);

  return 0;
}