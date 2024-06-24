//program that takes a number grade and gives a letter grade
//from 0 to 100
//must use a switch statement

#include <stdio.h>

int main(void)
{
    int num_grade;

    printf("Enter a grade: ");
    scanf("%d", & num_grade);

    if(num_grade < 0 || num_grade > 100)
    {
        printf("Illegal Grade.");
    }
    else
    {
        printf("Letter Grade ");

        switch (num_grade/10)
        {
        case 10: case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
        }
        printf(".");
    }


    return 0;
}