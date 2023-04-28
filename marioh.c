// This "includes" only works on the CC50 IDE. 
// https://code.cs50.io/ <-- Link 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, column, space;
    do
    {
        // pega o numero do usuario
        height = get_int("Tamanho: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("  ");
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}