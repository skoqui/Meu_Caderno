/*
#include <stdio.h>

int main() {
  for (int i = 0; i < 6; i++)
    for (int j = 0; j < 6; j++) printf("%d %d\n", i, j);

  return 0;
}

// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 0
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 0
// 2 1
// 2 2
// 2 3
// 2 4
// 2 5
// 3 0
// 3 1
// .....
*/

#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
    printf("------------\n");
  }
  return 0;
}