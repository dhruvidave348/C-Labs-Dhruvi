#include<stdio.h>
int main(){
    float temp,z;
    printf("enter temperature in celcius");
    scanf("%f",&temp);
    z=(temp*(9.0/5.0))+32;
    printf("the temp in farenheit is %f",z);
    return 0;
}