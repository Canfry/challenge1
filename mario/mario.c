#include <cs50.h>
#include <stdio.h>
#include <string.h>


int get_size(void);
void print_grid(int size);
int main(void)
{
    // Get the height
    int height = get_size();


    // Print the bricks
    print_grid(height);

}

int get_size(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);
    return height;
}

void print_grid(int size)
{
    int row, column, space;
    for (row = 0; row < size; row++)
    {
        for (space = 0; space < size - row - 1; space++)
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