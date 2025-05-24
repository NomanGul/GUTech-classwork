#include <stdio.h>

// 1. Take an int number as input and check if the number is negative. If it is, multiply it
// by −1 to turn it positive and print it.

// int main() {
//   int number;
//   printf("Enter number: ");
//   scanf("%d", &number);
//   if (number < 0) {
//     printf("Here's positive number: %d\n", number * -1);
//   } else {
//     printf("The number is already positive.\n");
//   }
//   return 0;
// }

// 2. Write a C program to see if a given number is a multiple of both 5 and 15.
// The number should be an int. Use scanf() to take the number as input and use
// printf() to state whether the number is a multiple of both 5 and 15.

// int main() {
//   int number;
//   printf("Enter number: ");
//   scanf("%d", &number);
//   if (number % 5 == 0 && number % 15 == 0) {
//     printf("Number is a multiple of both 5 and 15.\n");
//   } else {
//     printf("Number is NOT a multiple of both 5 and 15.\n");
//   }
//   return 0;
// }

// 3. Leap Year Checker - Write a program that checks if a year is a leap year (divisible by 4,
// but not by 100 unless also divisible by 400) using nested if statements.

// int main() {
//   int year;
//   printf("Enter year: ");
//   scanf("%d", &year);
//   if (year % 4 == 0) {
//     if (year % 100 == 0) {
//       if (year % 400 == 0) {
//         printf("LEAP YEAR!!!\n");
//         return 0;
//       }
//       printf("The year is not leap year.\n");
//       return 0;
//     }
//     printf("LEAP YEAR!!!\n");
//   } else {
//     printf("The year is not leap year.\n");
//   }
//   return 0;
// }

// 4. Calculator Program - Write a simple calculator that takes two numbers and an operator
// (+, -, *, /) as input and performs the operation using a switch case.

// int main() {
//   float x, y;
//   printf("Enter number x: ");
//   scanf("%f", &x);
//   printf("Enter number y: ");
//   scanf("%f", &y);

//   char op;
//   printf("Enter operator (+, -, *, /): ");
//   scanf("%s", &op);

//   switch (op) {
//     case '+':
//       printf("%.2f\n", x + y);
//       break;
//     case '-':
//       printf("%.2f\n", x - y);
//       break;
//     case '*':
//       printf("%.2f\n", x * y);
//       break;
//     case '/':
//       if (y == 0) {
//         printf("The denominator can't be zero");
//       } else {
//         printf("%.2f\n", x / y);
//       }
//       break;
//   }

//   return 0;
// }

// 5. Season Identifier - Write a program that takes a month number (1-12) and identifies
// the season:
// • Winter (12,1,2)
// • Spring (3-5)
// • Summer (6-8)
// • Fall (9-11)
// • Use switch case with fall-through or if-else if with logical OR.

// int main() {
//   int month;
//   printf("Enter month: ");
//   scanf("%d", &month);

//   switch (month) {
//     case 1:
//     case 2:
//     case 12:
//       printf("Winter\n");
//       break;
//     case 3:
//     case 4:
//     case 5:
//       printf("Spring\n");
//       break;
//     case 6:
//     case 7:
//     case 8:
//       printf("Summer\n");
//       break;
//     case 9:
//     case 10:
//     case 11:
//       printf("Fall\n");
//       break;
//     default:
//       printf("Invalid month\n");
//   }

//   return 0;
// }

// 6. Date Validator - Write a program that checks if a date (day, month, year) is valid,
// considering:
// • Month days (30/31)
// • February leap years
// – Please refer to problem no. 3.
// • Month range (1-12)
// • Use nested ifs and logical operators.

// int main() {
//   int year, month, day;

//   printf("Enter year: ");
//   scanf("%d", &year);
//   if (year < 1) {
//     printf("Invalid year.\n");
//     return 1;
//   }

//   printf("Enter month: ");
//   scanf("%d", &month);
//   if (month < 1 || month > 12) {
//     printf("Invalid month.\n");
//     return 1;
//   }

//   printf("Enter day: ");
//   scanf("%d", &day);
//   if (day < 1 || day > 31) {
//     printf("Invalid day.\n");
//     return 1;
//   } else if (day >= 30 && month == 2) { // feb should have less than 30 days
//     printf("Invalid date. February should have less than 30 days.\n");
//     return 1;
//   } else if (day == 31) {
//     if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
//       printf("Invalid date. There are no 31 days in month %d\n", month);
//       return 1;
//     }
//   }

//   if (month == 2 && day == 29) { // check leap year date
//     if (year % 4 != 0) {
//       printf("Invalid date. The %d year is not a leap year.\n", year);
//       return 1;
//     } else if (year % 100 == 0 && year % 400 != 0) {
//       printf("Invalid date. The %d year is not a leap year.\n", year);
//       return 1;
//     }
//   }

//   printf("Valid date!!! %d/%d/%d\n", day, month, year);
//   return 0;
// }

// 7. Tax Calculator - Write a program that calculates tax based on income brackets:
// • No tax (<= 20,000)
// • 10% (20,001 - 50,000)
// • 20% (50,001 - 1,00,000)
// • 30% (> 1,00,000)

// int main() {
//   int income;
//   printf("Enter income: ");
//   scanf("%d", &income);

//   if (income <= 20000) {
//     printf("No tax\n");
//   } else if (income <= 50000) {
//     int income_after_tax = income * 1.1; // 10%
//     printf("Income after 10%% tax is %d\n", income_after_tax);
//   } else if (income <= 100000) {
//     int income_after_tax = income * 1.2; // 20%
//     printf("Income after 20%% tax is %d\n", income_after_tax);
//   } else {
//     int income_after_tax = income * 1.3; // 30%
//     printf("Income after 30%% tax is %d\n", income_after_tax);
//   }

//   return 0;
// }
