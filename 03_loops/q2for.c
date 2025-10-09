#include<stdio.h>
int main(){
    int n,fact;
    printf("Number\n");
    scanf("%d",&n);
    fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    printf(" factorial of %d is %d",n,fact);
}