/* Program to find factorial of a number
   Author : Sameer Yadav 
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,product,loop;
    printf("enter number to find factorial : ");
    scanf("%d",&num);
    product = 1;
    for(loop=1;loop<=num;loop++)
    {
        product = product*loop; 
    }
    printf("factorial of number is %d",product);
    system("pause");
    return 0;
}