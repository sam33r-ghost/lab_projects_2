/* Program to read three numbers and print the biggest number 
   using conditional operator 
   Author : Sameer Yadav 
*/
#include<stdio.h>
int main(){
    int first,second,third,max;
    printf("enter first number : ");
    scanf("%d",&first);
    printf("enter second number : ");
    scanf("%d",&second);
    printf("enter third number : ");
    scanf("%d",&third);
    max = (first>=second)?((first>=third)?first:third):((second>=third)?second:third);
    printf("the biggest number is : %d",max);
    return 0;
}

