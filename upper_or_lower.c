#include <stdio.h>

void main()
{
    printf("Made by ImKool-Gitch\n");
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if (character >= 65 && character < 91)
    {
        printf("character is uppercase");
    }
    else if (character >= 97 && character < 123)
    {
        printf("character is lowercase");
    }
    else
    {
        printf("no symbols allowed only alphabet !");
    }
}
