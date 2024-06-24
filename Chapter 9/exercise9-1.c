/*
    ask user for a series of integers
    store it in an array

    use function selection_sort to sort from biggest to smallest
    function must search largest element, then move it to last position
    then call itself recursively to find n-1 

    main
    {
        ask for a series of integers;
        store into array;

        function call selection sort;

        print sorted array;
    }
    function selection_sort(int n, int array[*])
    {
        for i = 0; i < N; i++
        if element i is bigger than element N
            switch the two around
        recursive function call
    }
*/
#include <stdio.h>

# define N 5

void selection_sort(int sorting[], int aLength);

int main(void)
{
        int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i ++)
    {
        scanf("%d", &a[i]);
    }

    selection_sort(a, N);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }

    return 0;
}

void selection_sort(int sorting[], int aLength)
{
    int high;
    aLength--;
    if(aLength == 0)
        return;
    for(int x = 0; x <= aLength; x++)
    {
        if(sorting[x] > sorting[aLength])
        {
            high = sorting[x];
            sorting[x] = sorting[aLength];
            sorting[aLength] = high;
        }
    }
    selection_sort(sorting, aLength);
}