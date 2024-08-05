#include <stdio.h>

#define MAX_DIGITS 10

int segments[MAX_DIGITS][7] = 
{
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},//1
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1}, //4
    {1, 0, 1, 1, 0, 1, 1}, //5
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
    //0th, 3rd and 6th element are _, the rest are |
};

//this will save the displayed 
char digits[4][MAX_DIGITS * 4];

//Goes through the digits array and initialises all elements to space
void clear_digits_array(void);

/*
saves the printed display into digits to be printed
    {' ', ' ', ' ', ' ', ' ', '_', ' ', ' '},
    {' ', ' ', '|', ' ', ' ', '_', '|', ' '},
    {' ', ' ', '|', ' ', '|', '_', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
*/
void process_digit(int digit, int position);

void print_digits_array(void);

int main(void)
{

}