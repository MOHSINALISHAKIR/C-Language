#include<stdio.h>
int main(){
    int fact,num,c;
    fact=1;
    c=1;
    printf("Enter Factorial No \n");
    scanf("%d",&num);
    while (c<=num)
    {
        fact=fact*c;
        c++;

    }
    printf("Factorial of %d is %d",num,fact);
    
}