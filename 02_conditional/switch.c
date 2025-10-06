#include<stdio.h>
int main(){
    int dayNo;
    printf("Enter Week Day U Want To Print\n");
    scanf("%d",&dayNo);
    switch (dayNo)
    {
    case 1:
        /* code */
        printf("Monday");
        break;
    case 2:
        /* code */
        printf("Tuesday");
        break;
    case 3:
        /* code */
        printf("Wednesday");
        break;
    case 4:
        /* code */
        printf("Thursday");
        break;
    case 5:
        /* code */
        printf("Friday");
        break;
    case 6:
        /* code */
        printf("Saturday");
        break;
    case 7:
        /* code */
        printf("Sunday");
        break;
    
    default:
    printf("Invalid Number");
        break;
    }
}