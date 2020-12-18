//simple program to demonstrate pass by value

#include <stdio.h>

float increasebytenpercent(float price);

int main (void){
	
	float value = 50.00, newvalue = 0.0;
	
	newvalue = increasebytenpercent(value);
	
	printf("The New Price is %.2f \n", newvalue);
}

float increasebytenpercent(float price){
	
	return price*1.10;
}