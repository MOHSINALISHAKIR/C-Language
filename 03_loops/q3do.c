#include<stdio.h>
int main(){
    int fact,c,num;
    printf("Enter Any Number For Factorial\n");
    scanf("%d",&num);
    fact=1;
    c=1;
    do
    {
        fact=fact*c;
        c++;
        /* code */
    } while (c<=num);
    printf("The Factorial of %d is %d",num,fact);
    
}