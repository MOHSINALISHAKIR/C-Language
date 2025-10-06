#include<stdio.h>
int main(){
    int num1,num2,sum,product;
    printf("Enter First Number \n");
    scanf("%d",&num1);
    printf("Enter Second Number \n");
    scanf("%d",&num2);
    if(num1>0){
        sum=num1+num2;
        product=num1*num2;
        printf("sum of two numbers is %d\n",sum);
        printf("product of two numbers is %d",product);
    }

}