#include <stdio.h>

#define MAX_DIGITS 10
#define SEGMENT_HEIGHT 4

/*
      _  <-0
 5-> |_| <-1 center segment is 6
 4_> |_| <-2
      ^
      3
*/
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

//this will save the digit segment display 
char digits[SEGMENT_HEIGHT][MAX_DIGITS * SEGMENT_HEIGHT];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char ch;
    int count = 0, digit;

    clear_digits_array();

    printf("Enter a number: ");
    
    while ((ch = getchar()) != '\n')
    {
        if(ch >= '0' && ch <= '9' && count < MAX_DIGITS)
        {
            process_digit(ch - '0', count);
            count++;
        }
    }

    print_digits_array();

    return 0;
}

//Goes through the digits array and initialises all elements to space
void clear_digits_array(void)
{
    int x, y;
    for (x = 0; x < SEGMENT_HEIGHT; x++)
    {
        for (y = 0; y < MAX_DIGITS * SEGMENT_HEIGHT; y++)
        {
            digits[x][y] = ' ';
        }
    }
}
/*
    reads the digit input, converts it using segment, and saves the segmented digit into digits
*/
void process_digit(int digit, int position)
{

}

void print_digits_array(void)
{

}