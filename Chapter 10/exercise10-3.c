#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

//int num_in_rank[NUM_RANKS];
//int num_in_suit[NUM_SUITS];
int hand[NUM_RANKS][NUM_SUITS];
bool straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
    for(;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards(void)
{
    //bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    /*
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        num_in_rank[rank] = 0;
        for(suit = 0; suit < NUM_SUITS; suit++)
        {
            card_exists[rank][suit] = false;
        }
    }

    for(suit = 0; suit < NUM_SUITS; suit++)
    {
        num_in_suit[suit] = 0;
    }
    */

    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        //hand[rank] = 0;
        for(suit = 0; suit < NUM_SUITS; suit++)
        {
            //card_exists[rank][suit] = false;
            hand[rank][suit] = 0;
        }
    }

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch(rank_ch)
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;
        
        if(bad_card)
            printf("Bad card; ignored.\n");
        else if(hand[rank][suit])
            printf("Duplicate card; ignored.\n");
        else
        {
            //make true ie make card exit
            hand[rank][suit]++;
            //num_in_suit[suit]++;
            //card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

void analyze_hand(void)
{
    int num_consec = 0;
    int multiple_rank_counter = 0;
    int same_suit = 0;
    int rank, suit;
    bool same_rank = false;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    //checking for flush
    for(suit = 0; suit < NUM_SUITS; suit++)
    {
        for(rank = 0; rank < NUM_RANKS; rank++)
        {
            if(hand[rank][suit])
                same_suit++;
        }
        if(same_suit == NUM_CARDS)
        {
            flush = true;
            //break out of the whole loop
            suit = 5;
        }
        else
            same_suit = 0;
    }

    //checking for straight
    //goes through the suits then by ranks
    for(rank = 0; rank < NUM_RANKS; rank++)
    {
        for(suit = 0; suit < NUM_SUITS; suit++)
        {
            //if there is a card in the same rank through each suit
            //then multiple_rank_counter counts how many cards of different suits are in the same rank
            if(hand[rank][suit])
            {
                multiple_rank_counter++;
            }
        }
        //if there is only one card in the same rank then it could be a straight
        //but if there is more than one card in the same rank then it can never be a straight
        //since the cards saved in hand are already in order we dont need to sort just go through the multidimensional array
        //
        if((multiple_rank_counter == 1))
        {
            num_consec++;
            multiple_rank_counter--;
        }
    }

    if(num_consec == NUM_CARDS)
    {
        straight = true;
    }

    /*
    //checking for fours, threes and pairs
    //go through each rank
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        if (num_in_rank[rank]== 4) four = true;
        if (num_in_rank[rank]== 3) three = true;
        if (num_in_rank[rank]== 2) pairs++;
    }  
    */
    
}

void print_result(void)
{
    if(straight && flush) printf("Straight flush");
    else if(four) printf("Four of a kind");
    else if(three && pairs == 1) printf("Full house");
    else if(flush) printf("Flush");
    else if(straight) printf("Straight");
    else if(three) printf("Three of a kind");
    else if(pairs == 2) printf("Two Pairs");
    else if(pairs == 1) printf("Pair");
    else printf("High card");

    printf("\n\n");
}