#include <stdio.h>

// int main() {
//   int number;
//   printf("Enter an integer: ");
//   scanf("%d", &number);
//   if (number < 0) {
//     printf("You entered a negative number: %d.\n", number);
//   }
//   return 0;
// }

// int main() {
//   int number;
//   printf("Enter an integer: ");
//   scanf("%d", &number);
//   if (number % 2 == 0) {
//     printf("%d is an even number.\n", number);
//   } else {
//     printf("%d is an odd number.\n", number);
//   }
//   return 0;
// }

int main() {
  int x, y;
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);
  if (x > y) {
    printf("x is greater than y.\n");
  } else {
    printf("y is greater than x.\n");
  }
  return 0;
}
