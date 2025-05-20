#include<stdio.h>
int main(void){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2==0 && n!=0){
        printf("the number is even");
    }
    else if(n%2!=0){
        printf("the number is odd");
    }
    else{
        printf("0 is even");
    }
}
