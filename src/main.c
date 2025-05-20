#include <stdio.h>
#include "calculator.h"

#define OFF 0

int main(void) {
    int math_operation_selection;
    float num1, num2, result;
    int error;

    printf("Calculator is ON\n");

    do {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
         printf("5. Modulo\n");
        printf("0. Turn OFF\n");
        printf("Enter your selection: ");
        scanf("%d", &math_operation_selection);

        if (math_operation_selection == OFF) {
            printf("Calculator is OFF\n");
            break;
        }

        if (math_operation_selection < 1 || math_operation_selection > 5) {
            printf("Invalid selection. Please try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (math_operation_selection) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                result = divide(num1, num2);
                if (error) {
                    printf("Error: Division by zero!\n");
                } else {
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                result = modulo(num1, num2);
                printf("Result: %.2f\n", result);
                break;
        }
    } while (1);

    return 0;
}
