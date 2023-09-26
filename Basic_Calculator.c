//KH Fang

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Calculation Structure
struct Calculation {
    char operator;
    double num1;
    double num2;
    double result;
};

#define MAX_HISTORY_SIZE 100
struct Calculation history[MAX_HISTORY_SIZE];
int historyCount = 0;

//Display History Function
void displayHistory() {
    if (historyCount == 0) {
        printf("\nNo history available.\n");
        return;
    }

    printf("\n==== Calculation History ====\n");

    for (int i = 0; i < historyCount; i++) {
        struct Calculation calc = history[i];
        //if square root only one value needed to print
        if (calc.operator == 's') {
            printf("sqrt(%.2lf) = %.2lf\n", calc.num1, calc.result);
        }
        else {
            printf("%.2lf %c %.2lf = %.2lf\n", calc.num1, calc.operator, calc.num2, calc.result);
        }
    }
}

//Add calculation into array
void addHistory(struct Calculation calc, char operator, double num1, double num2) {
    calc.operator = operator;
    calc.num1 = num1;
    calc.num2 = num2;
    if (historyCount < MAX_HISTORY_SIZE) {
        history[historyCount] = calc;
        historyCount++;
    }
    else {
        // If the history array is full, remove the oldest calculation
        for (int i = 0; i < historyCount - 1; i++) {
            history[i] = history[i + 1];
        }
        history[historyCount - 1] = calc;
    }
}

int main() {
    char operator;
    double num1, num2;
    int ch, ch1;
    struct Calculation calc;

    do {
        system("cls"); // Clear the screen

        printf("Welcome to the Simple Calculator\n");
        printf("\n\t\t  Main Menu");
        printf("\n\t\t=====================");
        printf("\n\t\t[1] Perform Calculation");
        printf("\n\t\t[2] View History");
        printf("\n\t\t[0] Exit");
        printf("\n\t\t=====================");
        printf("\nEnter your choice: ");

        scanf("%d", &ch); //get input

        system("cls");

        switch (ch) {
            case 1:
                printf("\n\t\t=====================");
                printf("\n\t\t[1] Addition");
                printf("\n\t\t[2] Subtraction");
                printf("\n\t\t[3] Multiplication");
                printf("\n\t\t[4] Division");
                printf("\n\t\t[5] Exponentiation");
                printf("\n\t\t[6] Square Root");
                printf("\n\t\t[0] Main Menu");
                printf("\n\t\t=====================");
                printf("\nEnter your choice: ");

                scanf("%d", &ch1);

                system("cls");

                switch (ch1) {
                    case 1:
                        printf("\n==== Addition ====\n");
                        printf("\nEnter the equation:");
                        printf("\nExample: 12+34\n");

                        // Use a loop to check if the input is numeric and operator is correct
                        while (scanf("%lf %c %lf", &num1, &operator, &num2) != 3 ||(operator != '+')) {
                            printf("Invalid input. Please enter a valid equation: ");
                            while (getchar() != '\n'); //Clear the input buffer
                        }

                        calc.result = num1 + num2;
                        printf("Result: %.2lf\n", calc.result);
                        addHistory(calc, operator, num1, num2);
                        break;
                    case 2:
                        printf("\n==== Subtraction ====\n");
                        printf("\nEnter the equation:");
                        printf("\nExample: 98-76\n");

                        // Use a loop to check if the input is numeric and operator is correct
                        while (scanf("%lf %c %lf", &num1, &operator, &num2) != 3||(operator != '-')) {
                            printf("Invalid input. Please enter a valid equation: ");
                            while (getchar() != '\n'); // Clear the input buffer
                        }

                        calc.result = num1 - num2;
                        printf("Result: %.2lf\n", calc.result);
                        addHistory(calc, operator, num1, num2);
                        break;
                    case 3:
                        printf("\n==== Multiplication ====\n");
                        printf("\nEnter the equation:");
                        printf("\nExample: 12*3\n");

                        // Use a loop to check if the input is numeric and operator is correct
                        while (scanf("%lf %c %lf", &num1, &operator, &num2) != 3||(operator != '*')) {
                            printf("Invalid input. Please enter a valid equation: ");
                            while (getchar() != '\n'); // Clear the input buffer
                        }

                        calc.result = num1 * num2;
                        printf("Result: %.2lf\n", calc.result);
                        addHistory(calc, operator, num1, num2);
                        break;
                    case 4:
                        printf("\n==== Division ====\n");
                        printf("\nEnter the equation:");
                        printf("\nExample: 12/3\n");

                        // Use a loop to check if the input is numeric
                        while (scanf("%lf %c %lf", &num1, &operator, &num2) != 3||(operator != '/')||(num2 == 0)) {
                            printf("Invalid input. Please enter a valid equation: ");
                            while (getchar() != '\n'); // Clear the input buffer
                        }

                        calc.result = num1 / num2;
                        printf("Result: %.2lf\n", calc.result);
                        addHistory(calc, operator, num1, num2);
                        break;
                    case 5:
                        printf("\n==== Exponentiation ====\n");
                        printf("\nEnter the equation:");
                        printf("\nExample: 12^3\n");

                        // Use a loop to check if the input is numeric
                        while (scanf("%lf %c %lf", &num1, &operator, &num2) != 3||(operator != '^')) {
                            printf("Invalid input. Please enter a valid equation: ");
                            while (getchar() != '\n'); // Clear the input buffer
                        }

                        calc.result = pow(num1,num2);
                        printf("Result: %.2lf\n", calc.result);
                        addHistory(calc, operator, num1, num2);
                        break;
                    case 6:
                        printf("\n==== Square Root ====\n");
                        printf("\nEnter the number to calculate its square root: ");
                        while (scanf("%lf", &num1) != 1 || num1 < 0) {
                            printf("Invalid input. Please enter a non-negative number: ");
                            while (getchar() != '\n'); // Clear the input buffer
                        }
                        calc.result = sqrt(num1);
                        printf("Result: %.2lf\n", calc.result);
                        addHistory(calc, 's' , num1, 0); // Use 's' character to represent square root
                        break;
                    case 0:
                        break;
                    default:
                        printf("\nInvalid choice. Please try again.\n");
                        break; // Don't return to the main menu if there's an error
                }

                // Ask for return to menu confirmation
                char confirm;
                printf("Return to the main menu? (Y/N): ");
                scanf(" %c", &confirm);
                if (confirm == 'N' || confirm == 'n') {
                    ch = 0; // Exit the program
                }
                break;

            case 2:
                displayHistory();

                // Ask for return to menu confirmation
                char confirm2;
                printf("Return to the main menu? (Y/N): ");
                scanf(" %c", &confirm2);
                if (confirm2 == 'N' || confirm2 == 'n') {
                    ch = 0; // Exit the program
                }

                break;

            case 0:
                printf("\n   Thanks for using this calculator. \n\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
                char confirm3;
                printf("Return to the main menu? (Y/N): ");
                scanf(" %c", &confirm3);
                if (confirm3 == 'N' || confirm3 == 'n') {
                    ch = 0; // Exit the program
                }
        }
    } while (ch != 0);

    return 0;
}
