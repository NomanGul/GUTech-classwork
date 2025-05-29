#include <stdio.h>

// 1. Print Fibonacci sequence upto the n terms. n must be taken through scanf().
// Hint: The first two terms of the sequence are 0 and 1, and each successive term is the
// sum of the two preceding terms.

// int main() {
//   int max_num;
//   printf("Enter max num for Fibonacci sequence: ");
//   scanf("%d", &max_num);

//   int prev_number1 = 0;
//   int prev_number2 = 1;
//   printf("%d\n", prev_number1);
//   printf("%d\n", prev_number2);
//   for (int i = 1; i < max_num; i=prev_number1+prev_number2) {
//     printf("%d\n", prev_number1 + prev_number2);
//     prev_number1 = prev_number2;
//     prev_number2 = i;
//   }
//   return 0;
// }

// 2. Write a C code to print the factorial of a given number using for loop.
// Reminder: 0! = 1

// int main() {
//   int num;
//   printf("Enter num: ");
//   scanf("%d", &num);

//   int factorial = 1;

//   if (num <= 0) {
//     printf("%d\n", factorial);
//     return 0;
//   }

//   for (int i = num; i > 0; i--) {
//     factorial = factorial * i;
//   }

//   printf("factorial: %d\n", factorial);

//   return 0;
// }

// 3. Write a C code to print the sum of first n even numbers using while loop. Take n
// through scanf().

// int main() {
//   int num;
//   printf("Enter n: ");
//   scanf("%d", &num);
//   int sum = 0;
//   int calculated = 0;
//   int i = 0;
//   while (calculated < num) {
//     if (i % 2 == 0) {
//       sum += i;
//       i++;
//       calculated++;
//     } else {
//       i++;
//     }
//   }

//   printf("%d\n", sum);
//   return 0;
// }

// 4. Print the following star pattern using nested for loops. The given pattern is for n = 5.
// Your program should work with any value of n.
// * * * * *
// * * * *
// * * *
// * *
// *

// int main() {
//   int n = 5;

//   for (int i = n; i > 0; i--) {
//     for (int j = i; j > 0; j--) {
//       printf("*");
//     }
//     printf("\n");
//   }
// }


// 5. Print the following star pattern using nested for loops. The given pattern is for n = 5.
// Your program should work with any value of n.
// *
// * *
// * * *
// * * * *
// * * * * *

// int main() {
//   int n = 5;

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j <= i; j++) {
//       printf("*");
//     }
//     printf("\n");
//   }
// }
