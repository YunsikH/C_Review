        printf("Digit:\t\t");
        for(i = 0; i < ((int) (sizeof(digit_count)/sizeof(digit_count[0]))); i++)
        {
            printf(" %d", i);
        }
        printf("\nOccurences:\t");
        for(i = 0; i < ((int) (sizeof(digit_count)/sizeof(digit_count[0]))); i++)
        {
                printf(" %d", digit_count[i]);
        }