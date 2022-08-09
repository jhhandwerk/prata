#include<stdio.h>

#define NAME "Snowflakes, Inc."
#define ADRESS "123 Screwville"
#define PLACE "Tool Town, Osaka"
#define WIDTH 40

// declare prototype function
void dashbar(void);

int main(void)
{
    dashbar();
    printf("%s\n", NAME);
    printf("%s\n", ADRESS);
    printf("%s\n", PLACE);
    dashbar();

    return 0;
}

void dashbar(void)
{
    int count;
    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}