#include <stdio.h>

int main(void)
{
    int p1, p2, p3, p4;
    int p5, p6, p7, p8;
    int p9, p10, p11, p12;
    int p13, p14, p15, p16;

    printf("Enter Numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12, &p13, &p14, &p15, &p16);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16);
    printf("Row Sums: %d %d %d %d\n", p1 + p2 + p3 + p4, p5 + p6 + p7 + p8, p9 + p10 + p11 + p12, p13 + p14 + p15 + p16);
    printf("Column Sums: %d %d %d %d\n", p1 + p5 + p9 + p13, p2 + p6 + p10 + p14, p3 + p7 + p11 + p15, p4 + p8 + p12 + p16);       
    printf("Diagonal Sums: %d %d\n", p1 + p6 + p11 + p16, p4 + p7 + p10 + p13);

    return 0;
}