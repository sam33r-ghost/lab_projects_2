#include<stdio.h>
int main(){
    char c;
    printf("Enter character : ");
    scanf("%c",&c);
    (('a'<= c)&&(c <='z'))?printf("Given character is small case"):printf("Given character is not small case");
    return 0;
}