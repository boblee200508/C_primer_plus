#include <stdio.h>

int main (void)
{
    int years;
    int days;
    years = 12;
    days = 365 * years;
    printf("You are %d years old!\n",years);
    printf("So you are %d DAYs old!",days);

    return 0;
}