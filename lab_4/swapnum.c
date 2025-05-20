#include<stdio.h>
int main(void){
    int a,b;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("first num is %d\n",a);
    printf("second num is %d",b);
}