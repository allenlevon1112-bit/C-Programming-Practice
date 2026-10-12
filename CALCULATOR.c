
#include <stdio.h>

int main() 
{
    int a, b;
    char op;

    printf("===== SIMPLE CALCULATOR =====\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (op == '+') {
        printf("Result = %d\n", a + b);
    }
    else if (op == '-') {
        printf("Result = %d\n", a - b);
    }
    else if (op == '*') {
        printf("Result = %d\n", a * b);
    }
    else if (op == '/') {
        if (b != 0) {
            printf("Result = %.2f\n", (float)a / b);
        }
        else {
            printf("Error: Cannot divide by zero!\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
