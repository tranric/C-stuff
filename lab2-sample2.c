/* This is a program that can perform the following functions:
	1. determine the number of digits in a given integer
	2. find the greatest common denominator given 2 integers
	3. determine if a given 5-digit integer is a palindrome


   Group: Diana Butek, Ina Varghese
*/

#include <stdio.h>

// Function prototypes
int countDigits(int number);
int gcd(int x, int y);
void palindrome(int number);

// Main function
int main(void)
{

   int userChoice, number, result;
   int number1, number2;

   do 
   {

      // Menu options
      puts("(1) Recursive Count_Digits_In_Number");
      puts("(2) Recursive Greatest Common Divisor (GCD)");
      puts("(3) Palindrome Tester");
      puts("(4) Exit");

      printf("\n\n\tEnter Option: ");
      scanf("%d", &userChoice);

      // Perform action user has specified
      switch(userChoice)
      {

         // Case 1: count number of digits in number
         case 1: printf("\nEnter a positive integer: ");
                 scanf("%d", &number);

                 if (number < 0)
		    puts("The integer must be positive...please try again\n");
                 else
                 { 
		    result = countDigits(number);
		    printf("There are %d digits in the number %d\n", result, number);                    
                 }

                 break;

         // Case 2: find the greatest common denominator
         case 2: printf("\nEnter the first number: ");
                 scanf("%d", &number1);

                 printf("Enter the second number: ");
                 scanf("%d", &number2);

                 result = gcd(number1, number2);

                 printf("\nThe greatest common denominator for %d and %d is: %d\n", number1, number2, result);

                 break;

         // Case 3: determine if the number if a palindrome
         case 3: printf("\nEnter a positive 5-digit integer: ");
                 scanf("%d", &number);

                 if ((number < 10000)||(number > 99999))
		    printf("\nInteger must be positive and 5-digits...please try again\n");
                 else 
                    palindrome(number);

                 break;

         // Case 4: end the program
         case 4: puts("Program has terminated!");
                 break;

         // Catch all invalid selections
         default: puts("Invalid selection...please try again\n");
                  break;

      } // end switch
   }while (userChoice != 4); //end of do..while loop


} // end main

//***************Function definitions******************//

int countDigits(int number) {

   if (number < 1)
      return 0;

   else
      return 1 + countDigits(number/10); 

} // end of CountDigits


int gcd(int x, int y) {

   if (y == 0) 
      return x;

   else
      return gcd(y, x%y);

} // end of gcd 

void palindrome(int number) {

   int digit1, digit2, digit3, digit4, digit5;

   digit5 = (((number%10000)%1000)%100)%10;
   digit4 = (((number%10000)%1000)%100)/10;
   digit3 = ((number%10000)%1000)/100;
   digit2 = (number%10000)/1000;
   digit1 = number/10000;

   if ((digit5 == digit1) && (digit2 == digit4))
      printf("The number %d is a palindrome.\n", number);

   else 
      printf("The number %d is not a palindrome.\n", number);

} // end of palindrome










