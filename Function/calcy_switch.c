 #include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float a, b, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n--- Calculator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = add(a, b);
            printf("Result = %.2f", result);
            break;

        case 2:
            result = subtract(a, b);
            printf("Result = %.2f", result);
            break;

        case 3:
            result = multiply(a, b);
            printf("Result = %.2f", result);
            break;

        case 4:
            if(b != 0)
            {
                result = divide(a, b);
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Cannot divide by zero!");
            }
            break;
 
        default:
            printf("Invalid choice!");
    }

    return 0;
}

// Function definitions

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}