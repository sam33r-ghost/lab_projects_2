#include<stdio.h>
int main(){
    int num,loop,power,numcopy;
    printf("enter number : ");
    scanf("%d",&num);
    printf("enter power : ");
    scanf("%d",&power);
    num = num+num;
    numcopy = num/2;
    num=num/2;
    for(loop=1;loop<power;loop++)
    {
        num = num*numcopy;
    }
    printf("result : %d",num);
    return 0;
}