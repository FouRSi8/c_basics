#include <stdio.h>
void main(){
    //swtich statement

    int data;

    printf("Enter a day-code: \n");
    scanf("%d",&data);

    switch(data){
        case 0:
            printf("Sunday");
            break;

        case 1:
        {
            printf("Monday");
            break;
        }

        case 2:
        {
            printf("Tuesday");
            break;
        }

        case 3:
        {
            printf("Wednesday");
            break;
        }

        case 4:
        {
            printf("Thursday");
            break;
        }

        case 5:
        {
            printf("Friday");
            break;
        }

        case 6:
        {
            printf("Saturday");
            break;
        }

        default:
        printf("Wrong day-code");

    }
}