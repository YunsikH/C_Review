#include <stdio.h>

int main(void)
{
    int p1, p2, p3;

    printf("Enter Phone Numer [ (xxx) xxx-xxxx ]");
    scanf("(%d) %d-%d", &p1, &p2, &p3);
    printf("You Entered: %d.%d.%d", p1, p2, p3);

    return 0;
}