// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//   for(int i = 0; i < 4; i++)
//   {
//     printf("?");
//   }
//   printf("\n");
// }



// int main(void)
// {
//   for(int i = 0; i < 4; i++)
//   {
//     printf("#\n");
//   }
  
// }

// {
  // const int n = 5;
//   int n;
//   do
//   {
//     n = get_int("Size: "); 
//   }
//   while (n < 1);

//   for(int i = 0; i < n; i++)
//   {
//     for(int j = 0; j < n; j++)
//     {
//       printf("#");
//     }
//     printf("\n");
//   }
// }

// APPRAOCH PROBLEM WITH COMMENTS
#include <stdio.h>
#include <cs50.h>

// Put at the top of the file the functions
int get_size(void);
void print_grid(int size);

int main(void)
{
  // Get size of grid
  int n = get_size();

  // Print grid of bricks
  print_grid(n);
}

int get_size(void)
{
  int n;
  do
  {
    n = get_int("Size: ");
  } while (n < 1);
  return n;
  
}

void print_grid(int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
