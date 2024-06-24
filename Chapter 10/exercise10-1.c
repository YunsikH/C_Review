/*
FUNCTIONS ALWAYS NEEDS PARENTHESES. IF THEY DON'T HAVE PARENTHESES THEY ARE VARIABLES
 */
# include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

//External Variables
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

char peek(void);


int main(void)
{
    char user;
    printf("helpme");
    bool running = true;
    while(running)
    {
        user = getchar();

        switch(user)
        {
            case '(': case '{':
                push(user);
                break;
            case ')':
                if(peek() == '(')
                    pop();
                else
                    push(user);
                break;
            case '}':
                if(peek() == '{')
                    pop();
                else
                    push(user);
                break;
            case '\n':
                running = false;
                break;
            default:
            break;


        }
    }

    if(is_empty())
        printf("its empty");
    else
        printf("full");


    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;        
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else    
        return contents[--top];
}

void stack_overflow(void)
{
    printf("over");
}

void stack_underflow(void)
{
    printf("under");
}

char peek(void)
{
    int the_top = top - 1;

    return contents[the_top];
}