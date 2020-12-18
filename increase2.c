// Simple program to demonstrate pass-by-value

#include <stdio.h>

void increaseByTenPercent(float *pricePtr);

int main (void)
{
   float value = 50.00;
   
   increaseByTenPercent(&value);
  
   printf("The New Price Using Pointer is %.2f \n", value);
   
}

void increaseByTenPercent(float *pricePtr)
{
   *pricePtr = (*pricePtr) * 1.10;
}
