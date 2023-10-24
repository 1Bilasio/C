#include <stdio.h>

int main(void)
{

char name[20];
printf("Enter your name:\t");
scanf("%s", name);
printf("Hallo %s.\n Welcome to the party!\n", name);

printf("%d", sizeos(name));

    return 0;
}