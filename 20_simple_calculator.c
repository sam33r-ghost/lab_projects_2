/* Program to take 3 inputs from user 2 numbers and operator and perform arithmetic calculation
   using switch break
   Author : Sameer Yadav 
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float num1,num2,result;
    char operator;
    printf("Enter number 1 : ");
    scanf("%f",&num1);
    printf("Enter operator : ");
    scanf(" %c",&operator);
    printf("Enter number 2 : ");
    scanf("%f",&num2);
    switch(operator)
    {
    case('*'): 
    result = num1*num2;
    printf("the result is : %.2f\n",result);
    system("pause");
    break;
    case('+'):
    result = num1+num2;
    printf("the result is : %.2f\n",result);
    system("pause");
    break;
    case('-'):
    result = num1-num2;
    printf("the result is : %.2f\n",result);
    system("pause");
    break;
    case('/'):
    result = num1/num2;
    printf("the result is : %.2f\n",result);
    system("pause");
    break;
    default:
    printf("the entered operator is not valid for this calculator\n");
    system("pause");
    }
    return 0;
}