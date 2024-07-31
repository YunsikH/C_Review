#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//where the rank position is in hand array
#define RANK 0
//where the suit position is in hand array
#define SUIT 1
#define NUM_CARDS 5

int hand[NUM_CARDS][2];
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
    char ch, rank_ch, suit_ch;
    int rank, suit, i;
    bool bad_card, duplicate_card;
    int cards_read = 0;

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
        {
            printf("Bad card; ignored.\n");
            continue;
        }

        duplicate_card = false;
        for (i = 0; i < cards_read; i++)
        {

            if(hand[i][RANK] == rank && hand[i][SUIT] == suit) //check for duplicates
            {
                printf("Duplicate card; ignored.\n");
                duplicate_card = true;
            }
        }
        if (!duplicate_card)
        {
            hand[cards_read][RANK] = rank;
            hand[cards_read][SUIT] = suit;
            cards_read++;
        }
    }
}

void analyze_hand(void)
{
    int num_consec = 0;
    int rank, suit, pass, card;
    straight = false;
    flush = true;
    four = false;
    three = false;
    pairs = 0;
    //do not allow ace low straights
    bool ace_detected = false;

    //sort by ranks, by finding the biggest number for each pass
    for (pass = 1; pass < NUM_CARDS; pass++)// as the biggest number is already at the end we dont have to go that far; this is what this code and NUM_CARDS - PASS is for
    {
        //goes through each card of the hand
        for(card = 0; card < NUM_CARDS - pass; card++)
        {
            //saves the current card to compare with the next card
            rank = hand[card][RANK];
            suit = hand[card][SUIT];
            //if the next card is smaller than the current card, swap them around safely
            if (hand[card + 1][RANK] < rank)
            {
                hand[card][RANK] = hand[card + 1][RANK]; 
                hand[card][SUIT] = hand[card + 1][SUIT]; 
                hand[card + 1][RANK] = rank;
                hand[card + 1][SUIT] = suit;
            }
        }
    }

    //check for flush; when suits are all the same
    //uses the inverse so to speak
    suit = hand[0][SUIT]; 
    for(card = 0; card < NUM_CARDS; card++)
    {
        if(hand[card][SUIT] != suit)
            flush = false;

    }

    //check for straight
    //Because they are already in order we just have to check if they are in order
    for (card = 0; card < NUM_CARDS; card++)
    {
        if (hand[card][rank] == 12)
            ace_detected = true;
        if (hand[card][RANK] + 1 == hand[card + 1][RANK])
            num_consec++;
    }

    if (num_consec == 4 && ace_detected == false)
        straight = true;
    

    //checking for four of a kind, triples, and pairs
    int whatidk[13] = {0};
    for (card = 0; card < NUM_CARDS; card++)
    {
        rank = hand[card][RANK];
        whatidk[rank]++;
    }
    
    for (card = 0; card < 13; card++)
    {
        if (whatidk[card] == 4)
            four = true;
        if (whatidk[card] == 3)
            three = true;
        if (whatidk[card] == 2)
        {
            pairs++;
        }    
    }

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