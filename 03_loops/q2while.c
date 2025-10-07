#include<stdio.h>
int main(){
    int num,c;
    c=1;
    printf("Enter Table Number ");
    scanf("%d",&num);
    while (c<=10)
    {
        printf("%d*%d=%d\n",num,c,num*c);
        c++;1
    }
    
}