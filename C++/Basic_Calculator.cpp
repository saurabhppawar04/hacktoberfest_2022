#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
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
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
    return 0;
}

/*
Output
 First run:
    Enter first number: 10
    Enter second number: 20 
    Choose operation to perform (+,-,*,/,%): +
    Result: 10 + 20 = 30.000000 

    Second run:
    Enter first number: 10
    Enter second number: 3
    Choose operation to perform (+,-,*,/,%): /
    Result: 10 / 3 = 3.333333 

    Third run:
    Enter first number: 10
    Enter second number: 3
    Choose operation to perform (+,-,*,/,%): >
    Invalid operation.
    Result: 10 > 3 = 0.000000 
*/    
