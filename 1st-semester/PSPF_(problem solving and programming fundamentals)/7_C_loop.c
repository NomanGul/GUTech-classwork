#include <stdio.h>

// for loop

// int main() {
//   for (int i = 0; i < 10; i++) {
//     printf("%d\n", i);
//   }

//   return 0;
// }

// for loop table

// int main() {
//   int number;
//   printf("Enter a number to generate a table: ");
//   scanf("%d", &number);
//   // print number table
//   for (int i = 1; i <= 10; i++) {
//     printf("%d X %02d = %02d\n", number, i, number * i);
//   }

//   return 0;
// }

// while loop

// int main() {
//   int i = 1;

//   while(i <= 10) {
//     printf("%02d\n", i);
//     i++;
//   }

//   return 0;
// }

// while loop table

// int main() {
//   int number;
//   char want_another_table = 'y';

//   while(want_another_table == 'y') {
//     printf("Enter a number to generate a table: ");
//     scanf("%d", &number);
//     // print number table
//     for (int i = 1; i <= 10; i++) {
//       printf("%d X %02d = %02d\n", number, i, number * i);
//     }

//     printf("\nDo you want another table??? (y/any other) > ");
//     scanf(" %c", &want_another_table);
//     printf("\n");
//   }

//   return 0;
// }

// do while loop

// int main() {
//   int i = 0;

//   do {
//     printf("%d\n", i);
//     i++;
//   } while(i < 10);

//   return 0;
// }

// nested loops

// int main() {
//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 10; j++) {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }

// break statement

// int main() {
//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       break;
//     }
//     printf("%d\n", i);
//   }

//   return 0;
// }

// continue statement

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
  }

  return 0;
}
