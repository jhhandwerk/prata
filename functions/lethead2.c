#include<stdio.h>
#include<string.h>

#define NAME "Snowflakes, Inc."
#define ADRESS "123 Screwville"
#define PLACE "Tool Town, Osaka"
#define WIDTH 40
#define SPACE ' '

// declare prototype function
void show_n_char(char ch, int num);

int main(void)
{
    int spaces; 

    show_n_char('*', WIDTH);
    putchar('\n');
    // using constants as arguments
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);
    // write an expression that gives you a variable holding the correct amount of spaces
    spaces = (WIDTH-strlen(ADRESS))/2;
    // use the variable as an argument 
    show_n_char(SPACE, spaces);
    printf("%s\n", ADRESS);
    // using an expression as an argument
    show_n_char(SPACE, (WIDTH-strlen(PLACE))/2);
    printf("%s\n", PLACE);
    show_n_char('-',WIDTH);
    putchar('\n');

    return 0;
}

// function definition
void show_n_char(char ch, int num)
{
    int count;
    for (count = 1; count <= num; count++)
        putchar(ch);
}