/* Program to read two numbers and an operator and perform specific task using switch break
   Author : Sameer Yadav 
*/
#include<stdio.h>
int main(){
    int num1,num2,result;
    char operator;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter operator(r for remainder) : ");
    scanf(" %c",&operator);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    switch(operator)
    {
    case('*'): 
    result = num1*num2;
    printf("the result is : %d",result);
    break;
    case('+'):
    result = num1+num2;
    printf("the result is : %d",result);
    break;
    case('-'):
    result = num1-num2;
    printf("the result is : %d",result);
    break;
    case('/'):
    result = num1/num2;
    printf("the result is : %d",result);
    break;
    case('r'):
    result = num1%num2;
    printf("the remainder is : %d",result);
    break;
    default:
    printf("the entered operator is not valid for this calculator");
    }
    return 0;
}