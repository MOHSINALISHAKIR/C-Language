#include<stdio.h>

int main(){
    // function declaration
    // return-type function-name(parameter list);
    int power(int n);
    printf("welcome to c language\n");
    int power1=power(5);
    printf("%d",power1);

}
int power(int n){
    int res;
    res=n*n;
    return res;

}