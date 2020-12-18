// demonstrating the relationships between pointers and arrays

#include <stdio.h>

int main (void)
{
   size_t i;
   int numbers [4] = {3, 6, 9, 12};
   int *nPtr;
   nPtr = numbers;
   
   // Array Subscripting
   puts("Using Array Subscripting");
   for (i=0; i < 4; i++)
   {
     printf("%d ", numbers[i]);
   }
   puts("");
  
   // Pointer Subscripting
   puts("Using Pointer Subscripting");
   for (i=0; i < 4; i++)
   {
      printf(" %d ", nPtr[i]);
   }
   puts("");


   // Pointer Offset
   puts("Using Pointer Offset");
   for (i=0; i < 4; i++)
   {
      printf(" %d ", *(nPtr + i));
   }
   puts("");
    
   // Pointer Offset (with array name as pointer)
   puts("Using Pointer Offset with Array Name as pointer");
   for (i=0; i < 4; i++)
   {
      printf(" %d ", *(numbers + i));
   }
   puts("");
   
   

}



