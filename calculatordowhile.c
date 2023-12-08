#include<stdio.h>
int main()
{
    char operator;
    double num1, num2, result;

    do
    {
        printf("Enter an operator (+, -, *, /) or 'q' for quit  ");
        scanf(" %c", &operator);

        if (operator=='q')
        {
          break;
        }
        printf("Enter the number 1: ");
        scanf("%lf",&num1);
        printf("Enter the number 2: ");
        scanf("%lf",&num2);
        switch (operator)
        {
            case '+':
                result=num1+num2;
                break;
            case '-':
                result=num1-num2;
                break;
            case '*':
                result=num1*num2;
                break;
            case '/':
                if (num2!=0)
                {
                    result=num1 / num2;
                }
                else
                {
                    printf("Error: Division by zero is not possible\n");
                    continue;
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                continue;
        }

        printf("Result: %.2lf\n", result);

    } while(1);
    
    return 0; 
}