# Simple Calculator

This is a simple command-line calculator program written in C. It allows users to perform basic mathematical operations, view calculation history, and return to the main menu for further calculations or history viewing.

## Table of Contents
- [Features](#features)
- [How to Use](#how-to-use)
- [Calculation Operations](#calculation-operations)
- [Viewing Calculation History](#viewing-calculation-history)

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

Subtraction (-)

Multiplication (*)

Division (/)

Exponentiation (^)

Square Root (sqrt)

## Viewing Calculation History
You can view your calculation history by selecting the "View History" option from the main menu. The history will display previous calculations, including the operator used and the result. Once the program closed, the history will dissapeared.
