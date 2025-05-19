#include <stdio.h>

// Task 1: Calculate the area of a rectangle 
// int main() {
//   int width;
//   int height;

//   printf("Please enter Width: ");
//   scanf("%d", &width);

//   printf("Please enter Height: ");
//   scanf("%d", &height);

//   printf("Area of rectangle is: %d\n", width * height);

//   return 0;
// }

// Task 2: Write a C Code to calculate the total bill at a coffee shop. The user should input the price of an item and the quantity they want to purchase. The algorithm should compute the subtotal, add 8% tax, and display the final total.
// int main() {
//   float item_price;
//   int quantity;

//   printf("Please enter item price: ");
//   scanf("%f", &item_price);

//   printf("Please enter item quantity: ");
//   scanf("%d", &quantity);

//   float total = item_price * quantity;
//   float total_bill_with_vat =  total;

//   printf("Total bill (vat incl.): %.2f\n", total_bill_with_vat);

//   return 0;
// }

// Task 3: Create a program that collects personal information from the user: Name, Age, Height, and Gender. Print this information back to the user.
// int main() {
//   char name[50];
//   int age;
//   float height;
//   char gender; // M or F

//   printf("Please enter name: ");
//   scanf("%s", name);

//   printf("Please enter age: ");
//   scanf("%d", &age);

//   printf("Please enter height: ");
//   scanf("%f", &height);

//   printf("Please enter gender: ");
//   scanf(" %c", &gender); // notice the blank space before format specifier. it was not working properly without that.

//   // Aik hi line pr bhi kr skte hain but we should write clean code
//   printf("---------------------------\n");
//   printf("User Information:\n");
//   printf("Name = %s\n", name);
//   printf("Age = %d\n", age);
//   printf("Height = %f\n", height);
//   printf("Gender = %c\n", gender);

//   return 0;
// }

// Task 4: Create a calculator program that takes two numbers and performs basic arithmetic operations (+, -, *, /). 
// ● The program should take the numbers and operation type as input. 
// ● Display the result of the operation.
// int main() {
//   double x;
//   double y;

//   printf("Please enter number 1: ");
//   scanf("%lf", &x);

//   printf("Please enter number 2: ");
//   scanf("%lf", &y);

//   printf("-------------\n");
//   printf("Add: %.2f\n", x + y);
//   printf("Subtract: %.2f\n", x - y);
//   printf("Multiply: %.2f\n", x * y);
//   printf("Divide: %.2f\n", x / y);

//   return 0;
// }

// Task 5: Write a C code to calculate the parking fee based on the number of hours a car is parked. The first 2 hours cost 5 units. Every additional hour costs 2 units each. 
// int main() {
//   float hours_parked;

//   printf("Hours car parked: ");
//   scanf("%f", &hours_parked);

//   float fee;

//   if fee 

//   printf("Fee: %.2f", fee)

//   return 0;
// }

// Task 6: Create a program that asks for your name, age and weight then prints a greeting. 
// int main() {
//   char name[50];
//   int age;
//   float weight;

//   printf("Please enter your name: ");
//   scanf("%s", name);

//   printf("Please enter your age: ");
//   scanf("%d", &age);

//   printf("Please enter your weight: ");
//   scanf("%f", &weight);

//   printf("Hello %s\n", name);
//   return 0;
// }

// Task 7: Create a program that asks the user to enter the names and prices of three items they want to buy, and then print out the shopping list with formatted output shown in picture below.
// int main() {
//   char item_1_name[50];
//   float item_1_price;
//   char item_2_name[50];
//   float item_2_price;
//   char item_3_name[50];
//   float item_3_price;

//   printf("Enter the name of item 1: ");
//   scanf("%s", item_1_name);
//   printf("Enter the price of item 1: ");
//   scanf("%f", &item_1_price);

//   printf("Enter the name of item 2: ");
//   scanf("%s", item_2_name);
//   printf("Enter the price of item 2: ");
//   scanf("%f", &item_2_price);

//   printf("Enter the name of item 3: ");
//   scanf("%s", item_3_name);
//   printf("Enter the price of item 3: ");
//   scanf("%f", &item_3_price);

//   printf("Shopping List:\n");
//   printf("1. %s", item_1_name);
//   printf(": $%.2f\n", item_1_price);
//   printf("2. %s", item_2_name);
//   printf(": $%.2f\n", item_2_price);
//   printf("3. %s", item_3_name);
//   printf(": $%.2f\n", item_3_price);

//   return 0;
// }

// Task 8: Write a program that prompts the user for the grades of three subjects. Calculate the average and print it using the printf function
// int main() {
//   float grade1;
//   float grade2;
//   float grade3;

//   printf("Enter grade for subject 1: ");
//   scanf("%f", &grade1);

//   printf("Enter grade for subject 2: ");
//   scanf("%f", &grade2);

//   printf("Enter grade for subject 3: ");
//   scanf("%f", &grade3);

//   float average = (grade1 + grade2 + grade3) / 3;

//   printf("Your average grade is: %.2f\n", average);

//   return 0;
// }
