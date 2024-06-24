#include <stdio.h>

int main(void)
{
    int gs1, group, publisher,itemno, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &itemno, &check);
    
    printf("GS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", group);
    printf("Publisher Code: %d\n", publisher);
    printf("Item number: %d\n", itemno);
    printf("Check digit: %d\n", check);

    return 0;
}