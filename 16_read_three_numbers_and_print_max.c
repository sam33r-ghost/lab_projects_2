// Program to read three numbers and print the biggest number
#include<stdio.h>
int main(){
    int first,second,third;
    printf("enter first number : ");
    scanf("%d",&first);
    printf("enter second number : ");
    scanf("%d",&second);
    printf("enter third number : ");
    scanf("%d",&third);
    if((first>=second)&&(first>=third))
    {
    printf("the biggest number is : %d",first);
    }
    else if((second>=third)){
        printf("the biggest number is : %d",second);
    }
    else{
        printf("the biggest number is : %d",third);
    }
    return 0;
}
