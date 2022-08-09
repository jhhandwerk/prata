// using pointers to make swapping work

#include <stdio.h>

// void interchange(int * u, int * v);
void interchange(int * u, int * v){
    int temp;

    temp = *u;
    *u = *v;
    *v = temp;
}

int main(void){
    int x = 5, y = 10;

    printf("originally x = %d and y = %d\n", x,y);
    // send adresses to funciton
    interchange(&x,&y);
    printf("but now x = %d and y = %d\n", x,y);
}

