#include <stdio.h>

int main(void)
{
    printf("%c%c%c%c\n", '\xDA', '\xC4', '\xC4', '\xBF');
    printf("%c  %c\n",   '\xB3', '\xB3');
    printf("%c  %c\n",   '\xB3', '\xB3');
    printf("%c%c%c%c\n", '\xC0', '\xC4', '\xC4', '\xD9');

    return 0;
}