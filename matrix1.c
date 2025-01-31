// SUM OF EVEN AND ODD ELEMENT OF THE MATRIX
#include <stdio.h>
int main() {
  int m, n, i, j, even = 0, odd = 0;
  printf("Enter order of matrix :\n");
  scanf("%d%d", &m, &n);
  int a[m][n];
  printf("Enter matrix elements.....\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (a[i][j] % 2 == 0)
        even = even + a[i][j];
      else
        odd = odd + a[i][j];
    }
  }
  printf("even sum :%d", even);
  printf("odd sum : %d", odd);
  return 0;
}
