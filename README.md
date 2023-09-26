# Simple Calculator

This is a simple command-line calculator program written in C. It allows users to perform basic mathematical operations, view calculation history, and return to the main menu for further calculations or history viewing.

## Table of Contents
- [Features](#features)
- [How to Use](#how-to-use)
- [Calculation Operations](#calculation-operations)
- [Viewing Calculation History](#viewing-calculation-history)
- [Error Handling](#error-handling)

## Features

- Addition, subtraction, multiplication, division, and exponentiation operations.
- Calculation history with the ability to view past calculations.
- Error handling for invalid input and division by zero.
- User-friendly menu system.
- Square root calculation.
- Return to the main menu for additional calculations or history viewing.

## How to Use

1. **Clone the Repository:**

   Clone the Simple Calculator repository to your local machine using the following command:

   ```bash
   git clone https://github.com/Hock714/basic_calculator.git
   cd calculator
Compile the Code:

Compile the source code using a C compiler (e.g., GCC) to create the executable file. Use the following command:

   gcc basic_calculator.c -o calculator

Run the Program:

Execute the calculator program by running:

   ./calculator

Main Menu:

Upon launching the program, you will see the main menu:


![image](https://github.com/Hock714/basic_calculator/assets/103088158/8b03f499-8f38-44e8-a979-51d09697c165)


Performing Calculations:

To perform a calculation, enter 1 and press Enter.
Choose the type of calculation (e.g., addition, subtraction) and enter the equation in the format num1 + num2. Press Enter to see the result.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/d506ff7a-2a26-4d81-b605-ac8b37269bb0)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/d26ad163-60dd-44db-a12b-d3f710eac30c)

Viewing Calculation History:

To view your calculation history, enter 2 from the main menu. If there is history, it will be displayed, including the operator used and the result.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/452ba95d-1d8e-416a-b7ba-3e98f03060e0)

Exiting the Program:

To exit the program, enter 0 from the main menu. You will see a thank-you message, and the program will terminate.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/382fdf00-275c-4802-a641-ee31f9ecec93)

Returning to the Main Menu:

After performing a calculation or viewing history, you can return to the main menu by following the on-screen prompts.
## Calculation Operations
The calculator supports the following operations:

Addition (+)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/61cc9ca7-584d-493d-940e-f48a34d1152f)

Subtraction (-)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/806afa7e-72f1-4b25-9207-37bb4f201a83)

Multiplication (*)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/140011f7-bf6a-4989-b52a-69fd0aa7ecf3)

Division (/)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/5e03b59a-8162-4d6f-bc3e-b1b2746f8981)

Exponentiation (^)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/b3ad28a0-e260-4704-9233-48bdac619211)

Square Root (sqrt)

![image](https://github.com/Hock714/basic_calculator/assets/103088158/fef2b828-7f36-45ee-8570-ad52ea1ec7a4)

## Viewing Calculation History
You can view your calculation history by selecting the "View History" option from the main menu. The history will display previous calculations, including the operator used and the result. Once the program closed, the history will dissapeared.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/718c04ca-a5cc-4347-a264-4e5701c98382)

## Error Handling

The Simple Calculator code includes error handling mechanisms to ensure valid user input and smooth operation:

1. **Invalid Input for Calculations:**
   - When users choose a calculation operation (e.g., addition, subtraction) and enter an equation (e.g., "12+34"), the code verifies if the input is numeric and if the operator is appropriate for the selected operation.
   - If the input doesn't meet these criteria (e.g., alphabetic characters or an incorrect operator), the code displays an error message and prompts the user to enter a valid equation.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/aea99ee3-3ff9-4d47-b05f-79582fd331c9)

2. **Division by Zero Check:**
   - During division operations, the code checks if the denominator (num2) is zero.
   - If the denominator is zero (division by zero), the code displays an error message and asks the user to enter a valid equation to prevent runtime errors.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/e6d39940-4af2-41aa-88f1-8af15afe14ab)

3. **Non-Negative Number for Square Root:**
   - When users choose the square root operation, the code verifies if the entered number is non-negative.
   - If the number is negative, the code displays an error message and prompts the user to enter a non-negative number, ensuring that square root calculations are performed on valid input.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/2b27c51e-d1f4-406d-a3c6-a4b1deed5ada)

4. **Menu Option Validation:**
   - The code validates user input for menu options to ensure that users only input valid choices (e.g., 0, 1, 2).
   - If users enter an invalid menu option, the code displays an error message and asks them to try again, preventing unintended behavior and ensuring correct menu interactions.

![image](https://github.com/Hock714/basic_calculator/assets/103088158/5ad7c2a3-e23a-4ca9-8e83-10f6676fd570)

These error handling mechanisms enhance the usability and reliability of the Simple Calculator, ensuring valid input and preventing unexpected issues during calculations.
