#include <stdio.h>

// Task 1. Loan Eligibility Evaluator (Difficulty: Easy)
// Write a C program to determine if a user is eligible for a loan based on the following:
// ● Input: Age, monthly income, and credit score.
// ● Conditions:
// If age < 21 → Not eligible.
// ○ If income < 20,000 → Not eligible.
// ○ If credit score < 600:
// ■ If score is between 500–599 → Eligible with high interest.
// ■ If < 500 → Not eligible.
// ○ If all conditions are met → Eligible with standard interest.

// Print the final eligibility result.
// Test Cases for Task 1
// Input: Age = 25, Income = 30000, Credit Score = 700 → Output: Eligible with standard interest
// Input: Age = 19, Income = 25000, Credit Score = 650 → Output: Not eligible (age)
// Input: Age = 35, Income = 18000, Credit Score = 620 → Output: Not eligible (income)
// Input: Age = 28, Income = 25000, Credit Score = 580 → Output: Eligible with high interest
// Input: Age = 45, Income = 40000, Credit Score = 490 → Output: Not eligible (score)

// int main() {
//   int age, monthly_income, credit_score;

//   printf("Age: ");
//   scanf("%d", &age);

//   if (age < 21) {
//     printf("Not eligible (age)\n");
//     return 0;
//   }

//   printf("Monthly Income: ");
//   scanf("%d", &monthly_income);

//   if (monthly_income < 20000) {
//     printf("Not eligible (income)\n");
//     return 0;
//   }

//   printf("Credit Score: ");
//   scanf("%d", &credit_score);

//   if (credit_score < 500) {
//     printf("Not eligible (score)\n");
//     return 0;
//   }

//   if (credit_score >= 500 && credit_score < 600) {
//     printf("Eligible with high interest\n");
//     return 0;
//   }

//   printf("Eligible with standard interest\n");

//   return 0;
// }

// Task 2. Time-Based Access Control System (Difficulty: Easy)
// Input:
// ● Hour of the day (0–23)
// ● User type (1 for Admin, 2 for Guest, 3 for Staff)
// Rules:
// ● Admins can access anytime.
// ● Guests can access only between 10–18.
// ● Staff can access from 6–22 except during 13–14 (lunch break).
// Use nested IF/ELSE to validate access.
// Test Cases for Task 2
// Input: Hour = 9, User = 1 → Output: Access granted
// Input: Hour = 11, User = 2 → Output: Access granted
// Input: Hour = 19, User = 2 → Output: Access denied
// Input: Hour = 13, User = 3 → Output: Access denied (lunch)
// Input: Hour = 21, User = 3 → Output: Access granted

// int main() {
//   int hour_of_day, user_type;

//   printf("Hour of the day: ");
//   scanf("%d", &hour_of_day);

//   if (hour_of_day < 0 || hour_of_day > 23) {
//     printf("Wrong hour of the day\n");
//     return 0;
//   }

//   printf("User type: ");
//   scanf("%d", &user_type);

//   if (user_type == 2 && (hour_of_day < 10 || hour_of_day > 18)) {
//     printf("Access denied\n");
//     return 0;
//   }

//   if (user_type == 3) {
//     if (hour_of_day < 6 || hour_of_day > 22) {
//       printf("Access denied\n");
//       return 0;
//     } else if (hour_of_day == 13 || hour_of_day == 14) {
//       printf("Access denied (lunch)\n");
//       return 0;
//     }
//   }

//   printf("Access granted\n");

//   return 0;
// }

// Task 3. Fuel Pump Authorization System (Difficulty: Easy-Medium)
// Input:
// ● Vehicle type (C for car, B for bike, T for truck)
// ● Fuel required (in liters)
// ● Membership card (Y or N)

// Rules:
// ● Cars and bikes: Max 20 liters
// ● Trucks: Max 100 liters
// ● Members get 10% extra fuel if within limit, otherwise no fuel.
// Determine whether the fuel can be given and how much.
// Test Cases for Task 3
// Input: Type = C, Fuel = 18, Member = Y → Output: Fuel: 19.8L
// Input: Type = T, Fuel = 120, Member = Y → Output: Not eligible
// Input: Type = B, Fuel = 20, Member = N → Output: Fuel: 20L
// Input: Type = T, Fuel = 90, Member = Y → Output: Fuel: 99L

// int main() {
//   char vehicle_type, membership_card;
//   int required_fuel_in_liters;

//   printf("Vehicle type: ");
//   scanf(" %c", &vehicle_type);

//   printf("Fuel required (in liters): ");
//   scanf("%d", &required_fuel_in_liters);

//   printf("Membership card: ");
//   scanf(" %c", &membership_card);

//   if (
//     !(vehicle_type == 'C' || vehicle_type == 'B' || vehicle_type == 'T') ||
//     required_fuel_in_liters < 0 || !(membership_card == 'Y' || membership_card == 'N')
//   ) {
//     printf("Invalid inputs\n");
//     return 0;
//   }

//   float fuel = 0;

//   if (vehicle_type == 'C' || vehicle_type == 'B') {
//     if (required_fuel_in_liters > 20) {
//       printf("Not eligible\n");
//       return 0;
//     }
//     fuel = required_fuel_in_liters;
//   }

//   if (vehicle_type == 'T') {
//     if (required_fuel_in_liters > 100) {
//       printf("Not eligible\n");
//       return 0;
//     }
//     fuel = required_fuel_in_liters;
//   }

//   if (membership_card == 'Y') {
//     fuel = fuel * 1.10;
//   }

//   printf("Fuel: %.2fL\n", fuel);

//   return 0;
// }


// Task 7 Advanced Unit Converter (Difficulty: Medium)
// Create a unit converter program that can convert values across three different types of
// measurements: Temperature, Distance, and Weight.
// Inputs:
// 1. Conversion Type (integer):
// ○ 1 = Temperature
// ○ 2 = Distance
// ○ 3 = Weight
// 2. Value to Convert (floating-point number):
// The numerical value that the user wants to convert.
// 3. Sub-option (integer):
// Specifies the exact conversion based on the chosen type:
// ○ For Temperature:
// ■ 1 = Celsius to Fahrenheit
// ■ 2 = Fahrenheit to Celsius
// ○ For Distance:
// ■ 1 = Meters to Kilometers
// ■ 2 = Kilometers to Miles
// ○ For Weight:
// ■ 1 = Kilograms to Pounds
// ■ 2 = Pounds to Kilograms

// Use nested switch statements to implement the logic for conversion type and sub-options.
// Test Cases for Task 7
// 1. Input: Conversion Type = 1, Value = 0, Sub-option = 1 → Output: 0°C is equal to 32°F
// 2. Input: Conversion Type = 2, Value = 5, Sub-option = 2 → Output: 5 kilometers is equal to
// 3.10686 miles
// 3. Input: Conversion Type = 3, Value = 100, Sub-option = 2 → Output: 100 pounds is equal
// to 45.3592 kilograms
// 4. Input: Conversion Type = 4, Value = 100, Sub-option = 1 → Output: Error: Invalid
// conversion type
// 5. Input: Conversion Type = 2, Value = 100, Sub-option = 3 → Output: Error: Invalid
// sub-option for Distance conversion

// int main() {
//   int conversion_type, suboption;
//   float value;

//   printf("Conversion type: ");
//   scanf("%d", &conversion_type);

//   printf("Suboption: ");
//   scanf("%d", &suboption);

//   printf("Value: ");
//   scanf("%f", &value);

//   switch(conversion_type) {
//     case 1:
//       switch(suboption) {
//         case 1:
//           printf("%.2f°C is equal to %.2f°F\n", value, (value * 9/5) + 32);
//           break;
//         case 2:
//           printf("%.2f°F is equal to %.2f°C\n", value, (value - 32) * 5/9);
//           break;
//       }
//       break;
//     case 2:
//       switch(suboption) {
//         case 1:
//           printf("%.2f Meters are equal to %.2f Kilometers\n", value, value / 1000);
//           break;
//         case 2:
//           printf("%.2f Kilometers are equal to %.2f Miles\n", value, value * 0.621371);
//           break;
//       }
//       break;
//     case 3:
//       switch(suboption) {
//         case 1:
//           printf("%.2f Kilograms are equal to %.2f Pounds\n", value, value * 2.2);
//           break;
//         case 2:
//           printf("%.2f Pounds are equal to %.2f Kilograms\n", value, value / 2.2);
//           break;
//       }
//       break;
//   }

//   return 0;
// }

// Task 9. Simple Number Pattern Generator (Difficulty: Easy)
// Write a program that generates number patterns based on user input. The program should
// allow the user to choose a pattern type, enter the starting number.
// Input from User:
// ● Pattern type (choose from 1 to 4)
// ● Starting number and Ending Number
// Pattern Types:
// 1. Ascending sequence (e.g., 1, 2, 3, 4, ...)
// 2. Descending sequence (e.g., 10, 9, 8, 7, ...)
// 3. Even numbers only (e.g., 2, 4, 6, 8, ...)
// 4. Odd numbers only (e.g., 1, 3, 5, 7, ...)

// int main() {
//   int pattern_type, start_num, end_num;

//   printf("Pattern type: ");
//   scanf("%d", &pattern_type);

//   printf("Start num: ");
//   scanf("%d", &start_num);

//   printf("End num: ");
//   scanf("%d", &end_num);

//   if (pattern_type < 1 || pattern_type > 4 || start_num > end_num) {
//     printf("Invalid inputs\n");
//     return 0;
//   }

//   if (pattern_type == 1) {
//     for (int i = start_num; i <= end_num; i++) {
//       printf("%d,", i);
//     }
//     printf("\n");
//   } else if (pattern_type == 2) {
//     for (int i = end_num; i >= start_num; i--) {
//       printf("%d,", i);
//     }
//     printf("\n");
//   } else if (pattern_type == 3) {
//     for (int i = start_num; i <= end_num; i++) {
//       if (i % 2 == 0) {
//         printf("%d,", i);
//       }
//     }
//     printf("\n");
//   } else if (pattern_type == 4) {
//     for (int i = start_num; i <= end_num; i++) {
//       if (i % 2 == 1) {
//         printf("%d,", i);
//       }
//     }
//     printf("\n");
//   }

//   return 0;
// }



/* 5 are completed above. this is 6th and INCOMPLETE. ignore it. */


// Task 5. Insurance Premium Calculator (Difficulty: Hard)
// Develop an insurance premium calculator with multiple risk factors:
// ● Take as input: age, gender (M/F), smoking status (Y/N), BMI, number of previous claims,
// coverage amount
// ● Premium calculation:
// ○ Base rate: $500 per year
// ○ Age factors: <25 (+40%), 25-35 (+10%), 36-50 (base), 51-65 (+20%), >65
// (+50%)
// ○ Gender: Male (+15% if age < 30), Female (+10% if age > 50)
// ○ Smoking: +75% if smoker
// ○ BMI: <18.5 (+20%), 18.5-24.9 (base), 25-29.9 (+15%), 30+ (+35%)
// ○ Claims: +25% per previous claim (max 3 claims considered)
// ○ Coverage: Premium = (Base Premium × Multipliers) × (Coverage Amount /
// 100000)

// ● Handle invalid inputs and display detailed premium breakdown
// Test Cases for Task 5
// 1. Input: Age = 22, Gender = 'M', Smoking = 'Y', BMI = 28.5, Claims = 1, Coverage =
// 200000 → Output: High premium due to multiple risk factors
// 2. Input: Age = 45, Gender = 'F', Smoking = 'N', BMI = 22.0, Claims = 0, Coverage =
// 100000 → Output: Base premium with minimal adjustments
// 3. Input: Age = 68, Gender = 'M', Smoking = 'N', BMI = 32.0, Claims = 3, Coverage =
// 150000 → Output: High premium due to age, BMI, and claims
// 4. Input: Age = 28, Gender = 'F', Smoking = 'N', BMI = 17.8, Claims = 0, Coverage =
// 250000 → Output: Premium with underweight penalty
// 5. Input: Age = -5, Gender = 'X', Smoking = 'M', BMI = 0, Claims = -1, Coverage = -1000 →
// Output: Error handling for all invalid inputs

// int main() {
//   int age, previous_claims, coverage_amount;
//   char gender, smoking_status;
//   float BMI;

//   printf("Age: ");
//   scanf("%d", &age);

//   printf("Gender: ");
//   scanf(" %c", &gender);

//   printf("Smoking Status: ");
//   scanf(" %c", &smoking_status);

//   printf("BMI: ");
//   scanf("%f", &BMI);

//   printf("Previous Claims: ");
//   scanf("%d", &previous_claims);

//   printf("Coverage Amount: ");
//   scanf("%d", &coverage_amount);

//   if (age < 0 || !(gender == 'M' || gender == 'F') ||
//     !(smoking_status == 'Y' || smoking_status == 'N') ||
//     previous_claims < 0 || coverage_amount < 0 || BMI < 0) {
//       printf("Invalid inputs\n");
//       return 0;
//     }
  
//   int base_rate = 500;
//   int multipliers = 100;

//   if (age < 25) {
//     multipliers += 40;
//   } else if (age >= 25 || age <= 35) {
//     multipliers += 10;
//   } else if (age >= 51 || age <= 65) {
//     multipliers += 10;
//   } else if (age > 65) {
//     multipliers += 50;
//   }

//   if (gender == 'M' && age < 30) {
//     multipliers += 15;
//   } else if (gender == 'F' && age > 50) {
//     multipliers += 10;
//   }

//   printf("WOw\n");
//   return 0;
// }
