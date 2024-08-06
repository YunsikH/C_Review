#include <stdio.h>

#define MAX_DIGITS 10
#define SEGMENT_HEIGHT 4
#define SINGLE_SEGMENT_LENGTH 4

/*
      _  <-0
 5-> |_| <-1 center segment is 6
 4_> |_| <-2
      ^
      3
*/
const int segments[MAX_DIGITS][7] = 
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

/*
    this will hold the digit segment display 
      SINGLE_SEGMENT_LENGTH = 3
      0 1 2 3  ~~~~ 40 spaces
    0 x _ x x
    1 | _ | x
    2 | _ | x
    3 x x x x

      0 1 2 3
    0 x 0 x x
    1 5 6 1 x
    2 4 3 2 x
    3 x x x x
    EITHER ROW 0 OR 3 WILL NEVER BE USED, ASSUME ROW 3 FOR MY IMPLEMENTATION 
    COLUMN THREE WILL ALWAYS BE EMPTY 
    x REPRESENTS SPACES THAT WILL NEVER BE USED, NUMBERS ARE TO REFERENCE SEGMENTS LOCATION
*/
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

    int digit will reference segments array to determine
    0 - 9 positions

    position will move digits[][this_spot]  
*/
void process_digit(int digit, int position)
{
    int i;
    
    //seven is number of segments to create the display
    for (i = 0; i < 7; i++)
    {
        if (segments[i][digit] == 1)
        {
            switch (i)
            {
                case 0:
                    digits[0][2 + (position * SINGLE_SEGMENT_LENGTH)] = '_';
                    break;
                case 3: 
                    digits[2][2 + (position * SINGLE_SEGMENT_LENGTH)] = '_';
                    break;                
                case 6:
                    digits[1][2 +(position * SINGLE_SEGMENT_LENGTH)] = '_';
                    break;

                case 1: 
                    digits[1][(position * SINGLE_SEGMENT_LENGTH)];
                    break;
                case 2: 
                    digits[2][(position * SINGLE_SEGMENT_LENGTH)];
                    break;
                case 4: 
                    digits[4][(position * SINGLE_SEGMENT_LENGTH)];
                    break;
                case 5:
                    digits[5][(position * SINGLE_SEGMENT_LENGTH)];                
                    break;
                default:
                    break;
            }
        }

    }
}

void print_digits_array(void)
{
    int x, y;
    
    for (x = 0; x < SEGMENT_HEIGHT; x++)
    {
        for (y = 0; y < MAX_DIGITS * SEGMENT_HEIGHT; y++)
        {
            printf("%c", digits[x][y]);
        }
    }
}