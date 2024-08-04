/*
    REVERSE POLISH NOTATION Program
    operands are single digits
 */
# include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

//External Variables
int contents[STACK_SIZE];
int top = 0;
int result = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
char peek(void);

//needs function to deal with operands and operators to create result
//uses the stack
void perform_operator(char operator);
int convert_char_to_int(char ch);

int main(void)
{
    char user;
    printf("Enter parentheses and/or braces: ");
    bool running = true;

    /*
        if operand is detected push onto the stuck

        if operator is entered, pop 2 operands from the stack, perform the operation on the 2 operands, and then push it back into the stack
    */
    while(running)
    {
        scanf(" %c", &user);

        switch(user)
        {
            case '1': case '2': case '3': case '4': case '5': case '6':  case '7': case '8': case '9': 
                push(user);
                break;
            case '*': case '/': case '+': case '-':
                perform_operator(user);
                break;
            case '\n':
                running = false;
                break;
            default:
            break;
        }
    }

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
    printf("Stack Overflow.");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    printf("under");
}

char peek(void)
{
    return contents[top - 1];
}

void perform_operator(char operator)
{
    char operand1, operand2;
    int result;
    operand1 = pop();
    operand2 = pop();
    switch (operator)
    {
        case '+':
            result = convert_char_to_int(operand1) + convert_char_to_int(operand2);
            break;
        case '-':
            result = convert_char_to_int(operand1) - convert_char_to_int(operand2);
            break;
        case '*':
            result = convert_char_to_int(operand1) * convert_char_to_int(operand2);
            break;
        case '/':
            result = convert_char_to_int(operand1) / convert_char_to_int(operand2);
            break;
    }
}

int convert_char_to_int(char ch)
{
    //48 is to shift int values
    return ch - 48;
}

int convert_char_to_int(char ch)
{
    //48 is to shift int values
    return ch - 48;
}
