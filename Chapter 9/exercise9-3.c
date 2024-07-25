/**
 * done without testing until code was completed mwaahhahah
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROW 10
#define COLUMN 10
#define EMPTY_FIELD '.'

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char field[ROW][COLUMN];


    generate_random_walk(field);

    print_array(field);

    

    return 0;
}

void generate_random_walk(char walk [10][10])
{
    int i, j, x_pos = 0, y_pos = 0, direction;
    char ch = 'A';
    bool x_west = false, x_north = false, x_south = false, x_east = false;
    
    srand((unsigned) time(NULL));
    
    //populates field array with .
    for (i = 0; i < COLUMN; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            walk[j][i] = EMPTY_FIELD;
        }   
    } 

    //function that determines the random path of the 'alphabet snake' in the field
    while (ch != 'Z' + 1)
    {
        walk[x_pos][y_pos] = ch;
        
        direction = rand() % 4;
        switch (direction)
        {
        case 0://north
            
            if (y_pos == 0 || walk[x_pos][y_pos - 1] != '.')
            {
                x_north = true;
                break;
            }
            else
            {
                y_pos--;
                ch++;
                x_west = false, x_north = false, x_south = false, x_east = false;
            }  
            break;
        case 1://south
            if (y_pos == COLUMN - 1 || walk[x_pos][y_pos + 1] != '.')
            {
                x_south = true;
                break;
            }
            else
            {    
                y_pos++;
                ch++;
                x_west = false, x_north = false, x_south = false, x_east = false;
            }
            break;
        case 2://west
            if (x_pos == 0 || walk[x_pos - 1][y_pos] != '.')
            {
                x_west = true;
                break;
            }
            else
            {
                x_pos--;
                ch++;
                x_west = false, x_north = false, x_south = false, x_east = false;
            }
            break;
        case 3://east
            if (x_pos == ROW -1 || walk[x_pos + 1][y_pos] != '.')
            {
                x_east = true;
                break;
            }
            else
            {
                x_pos++;
                ch++;
                x_west = false, x_north = false, x_south = false, x_east = false;
            }
            break;     
        default:
            break;
        }

        //if cant move anywhere terminate the program
        if (x_north == true && x_south == true && x_west == true && x_east == true)
        {
            ch = 'Z' + 1;
        }
    }
}

void print_array(char walk[10][10])
{
    int i, j;
    //print out the array after the 'alphabet snake' has made its path 
    for (i = 0; i < COLUMN; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("%c ", walk[j][i]);
        }
        printf("\n");     
    }
}