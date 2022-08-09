#include<stdio.h>
void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n<4)
        up_and_down(n+1);
    printf("LEVEL %d: n location %p\n", n,&n);
}

// output
// Level 1: n location 0x16f56755c
// Level 2: n location 0x16f56752c
// Level 3: n location 0x16f5674fc
// Level 4: n location 0x16f5674cc
// LEVEL 4: n location 0x16f5674cc
// LEVEL 3: n location 0x16f5674fc
// LEVEL 2: n location 0x16f56752c
// LEVEL 1: n location 0x16f56755c
// prata
// its like a chain of funciton calls func1() calls func()2, func2() calls func3()...
// when func3() finishes, it passes control back to the function that called it, func2().
// the only difference is that with reccursion, they are all the same function. 