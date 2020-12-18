// Saad & Raza

#include <stdio.h>

// function headers
int countDigits(int number);
int gcd (int x, int y);
void palindrome(int number);

int main(void) // initialize main
{
   int choice=0;
   int result, number, x, y, holder; // initialize variables

   while(choice!=4) // initialize while loop and display choices
{
      puts("(1)Recursive Count_Digits_In_Number");       //prompt user with choices
      puts("(2)Recursive Greatest Common Divisor (GCD)");
      puts("(3)Palindrome Tester");
      puts("(4)Exit\n  Enter Option: ");
      scanf("%d",&choice);

//create a switch with 4 cases plus default case
      switch(choice){
         case 1: // case to compute first choice
            printf("please enter a number to count digits:");
            scanf("%d", &number);
            if(number > 0){
               result = countDigits(number);  // function call to compute user choice
               printf("the number of digits of %d is %d\n",number,result);
            }
            else{
               puts("wrong entry!\n");
            }
            break;
         case 2: // compute second choice
            printf("please enter the first number:");
            scanf("%d", &x);
            printf("please enter the second number:");
            scanf("%d", &y);   
            if (x<y){      // making sure x is greater than y
               holder=x;
               x=y;
               y=holder;
            }
            result = gcd(x,y);  // function call to compute user choice
            printf("the largest divisor of %d and %d is %d\n",x,y,result);
            break;
         
         case 3:  // compute third choice
            printf("please enter a number to know if it's a palindrome tester:");
            scanf("%d", &number);
            if(number > 0){   // check the user entry is appropriate
               palindrome(number);  // function call to compute user choice
            }
            else{
               puts("wrong entry!\n");
            }
            break;
         
         case 4:  // exit case
            printf("EXITING PROGRAM\n");  // case to exit program
            break;
         
         default:   // case for incorrect entries
            printf("incorrect entry!\n");
            break;
      }
   }

}
int countDigits(int number){  // function to count the number of digits in a given integer
  if (number==0) // base case
     return 0;
  else
     return 1 + countDigits(number/10); // recursive step
}

int gcd(int x, int y){   // function to find the greatest common divisor 
   if (y==0)   // base case
      return x;

   else if (x>=y&&y>0)   // recursive step
      return gcd(y,(x%y));
}
void palindrome (int number){  // function to check if an integer is a palindrome
   int result=0;
   int num=number;
   while (num!=0){
      result= result*10;
      result+=num%10;
      num= num/10;
   }
   if (number==result)
      printf("%d is a palindrome\n", number);
   else
      printf("%d is not a palindrome\n",number);
}
