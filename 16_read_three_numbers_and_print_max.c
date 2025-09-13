/* Program to read three numbers and print the biggest number 
   Author : Sameer Yadav 
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int first,second,third;
    printf("enter first number : ");
    scanf("%d",&first);
    printf("enter second number : ");
    scanf("%d",&second);
    printf("enter third number : ");
    scanf("%d",&third);
    if((first>=second))
{ 
    if(first>=third)
    {
    printf("the biggest number is : %d\n",first);
    system("pause");    
    } 
    else if((second>=third)){
    printf("the biggest number is : %d\n",second);
    system("pause");
    }
    else
    {
    printf("the biggest number is : %d\n",third);
    system("pause");
    }
}
    else if((second>=third))
    {
        printf("the biggest number is : %d\n",second);
        system("pause");
    }
    else
    {
        printf("the biggest number is : %d\n",third);
        system("pause");
    } 
return 0;
}
