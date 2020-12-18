//simple program to demonstrate pass by value

#include <stdio.h>

void increasebytenpercent(float *priceptr);

int main (void){
	
	//float value = 50.00, newvalue = 0.0;
	
	//newvalue = increasebytenpercent(value);
	
	//printf("The New Price is %.2f \n", newvalue);
	
   float value = 50.00;
   
   increasebytenpercent(&value);
  
   printf("The New Price Using Pointer is %.2f \n", value);
	
	
}

void increasebytenpercent(float *priceptr){
	
	*priceptr = (*priceptr)* 1.10;
	
	
	
}