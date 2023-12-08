#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter the number 1:");
    scanf("%lf",&num1);
    printf("Enter the number 2:");
    scanf("%lf",&num2);
    if(operator=='+')
    {
        result=num1+num2;
    }
    else if (operator=='-')
    {
       result=num1-num2; 
    }
    else if(operator=='*')
    {
        result=num1*num2;
    }
    else if(operator=='/')
    {
        if(num2!=0)
        {
            result=num1/num2;
        }
        else
        {
            printf("ERROR:DIVISION BY ZERO IS NOT POSSIBLE ");
            return 1;
        }
    }
    else 
    {
        printf("ERROR:INVALID OPERATOR");
        return 1;
    }
    printf("RESULT:%.2lf",result);
}