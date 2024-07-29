/*****
 * Craps Game
 * 
 * Played with two dice
 * On first roll, winning sum of both dice of 7 or 11
 * On first roll, losing roll sum is 2, 3 , 12
 * If first roll is not winning or losing, first roll is now point roll
 * 
 * After first roll, next winning roll is point roll
 * After first roll, next losing roll is 7
 * after roll, any not winning or not losing dice means next roll
 * 
 * after the end of a game(win or lose condition is met), 
 * program will ask if user wants to play again.
 * to play again, user must respond with y or Y
 * any other input will display the number of iwns and then terminate
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define DIE_SIZE 6

int roll_dice(void);
bool play_game(void);

/**
 * Main calls play_game until the user wants to stop
 * Main will keep track of the number of wins and losses
 * and will also display the you win or you lose messages
 */
int main(void)
{
    srand((unsigned) time(NULL));
    bool outcome, running = true;
    int wins = 0, losses = 0;
    char ch;

    while(running)
    {
        outcome = play_game();

        if (outcome == false)
            losses++;
        else if (outcome == true)
            wins++;
        
        printf("Play again? ");
        ch = getchar();

        if ((toupper(ch) != 'Y'))
            running = false;
        
        ch =  getchar();
    }

    //print the score
    printf("\nWins: %d Losses: %d", wins, losses);

    return 0;
}
/***
 * roll_dice will simply roll the dice and be called in play_game function
 */
int roll_dice(void)
{
    return (rand() % DIE_SIZE) + 1 + (rand() % DIE_SIZE + 1);
}

/***
 * play_game will play one game and return true if the player wins or false if the player loses
 * It will display the messages showing the results of the players rolls
 */
bool play_game(void)
{
    //bool outcome;
    int point_roll, dice_roll;

    //first roll
    dice_roll = roll_dice();
    printf("You rolled: %d\n", dice_roll);
    if (dice_roll == 7 || dice_roll == 11)//winning on first roll
    {
        printf("You Win!\n\n");
        return true;
    }
    else if (dice_roll == 2 || dice_roll == 3 || dice_roll == 12) //losing on first roll
    {
        printf("You Lose!\n\n");
        return false;
    }

    //set point roll
    point_roll = dice_roll;
    printf("Your point is %d\n", point_roll);

    // subsequent rolls
    while(true)
    {
        dice_roll = roll_dice();
        printf("You rolled: %d\n", dice_roll);
        if (dice_roll == 7)
        {
            printf("You Lose!\n\n");
            return false;
        }
        else if (dice_roll == point_roll)
        {
            printf("You Win!\n\n");
            return true;
        }      
    }
   

}