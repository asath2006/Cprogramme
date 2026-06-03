#include <stdio.h>
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    float a, b;
    int choice;
    float (*operations[])(float ,float) = {
        add,
        subtract,
        multiply,
        divide
    };

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nChoose Operation:\n");
    printf("0. Addition (+)\n");
    printf("1. Subtraction (-)\n");
    printf("2. Multiplication (*)\n");
    printf("3. Division (/)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 3) {
        float result = operations[choice](a, b);
        printf("Result = %.2f\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
