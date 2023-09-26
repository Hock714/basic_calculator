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

Welcome to the Simple Calculator

   **Main Menu**
**=====================**
**[1] Perform Calculation**
**[2] View History**
**[0] Exit**
**=====================**
Enter your choice:
Performing Calculations:

To perform a calculation, enter 1 and press Enter.
Choose the type of calculation (e.g., addition, subtraction) and enter the equation in the format num1 + num2. Press Enter to see the result.
Viewing Calculation History:

To view your calculation history, enter 2 from the main menu. If there is history, it will be displayed, including the operator used and the result.
Exiting the Program:

To exit the program, enter 0 from the main menu. You will see a thank-you message, and the program will terminate.
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
