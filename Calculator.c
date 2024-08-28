#include <stdio.h>
int main() {
    float num1, num2, result;
    char choice;
    printf("Enter the first number(+,-,*./): \n");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Choose an operation:\n");
    printf("+. Addition\n");
    printf("-. Subtraction\n");
    printf("*. Multiplication\n");
    printf("/. Division\n");
    scanf(" %c", &choice);
    if (choice == '+') {
        result = num1 + num2;
        printf("Result: %f\n", result);
    } else if (choice == '-') {
        result = num1 - num2;
        printf("Result: %f\n", result);
    } else if (choice == '*') {
        result = num1 * num2;
        printf("Result: %f\n", result);
    } else if (choice == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error:Zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}
