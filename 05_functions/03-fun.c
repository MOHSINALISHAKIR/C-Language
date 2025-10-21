#include<stdio.h>
int cube(int n){
    int res;
    res=n*n*n;
    return res;
}
int main(){
    printf("welcome to c language\n");
    printf("calling a function\n");
    int cubeAns = cube(3);
    printf("%d cube is = ",cubeAns);
}