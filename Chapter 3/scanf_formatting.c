#include <stdio.h>

int main(void)
{
    int item_no, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_no);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item\t\t Unit\t\t Purchase\t\t\n");
    printf("\t\t Price\t\t Date\t\t\n");
    printf("%d\t\t $%7.2f\t\t %d/%d/%d\n", item_no, unit_price, month, day, year);

    return 0;
}