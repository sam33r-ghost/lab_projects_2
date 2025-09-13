/* Program to check whether a character is small case or not
   Author : Sameer Yadav 
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    char c;
    printf("Enter character : ");
    scanf("%c",&c);
    (('a'<= c)&&(c <='z'))?printf("Given character is small case"):printf("Given character is not small case");
    printf("\n");
    system("pause");
    return 0;
}