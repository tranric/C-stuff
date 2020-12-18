#include <stdlib.h>
#include <stdio.h>

int main (void)
{
int choice,x, y;

do
{

puts("1) Multiply by adding");
puts("2) Divide by subtracting");
puts("3) Factorial");
puts("4) isPrimeOrNot");
puts("5) Exit");

printf("Please enter your selection:");
scanf("%d", &choice);

switch (choice)
{
case 1:
printf("Please enter an integer for X:");
scanf("%d", &x);

printf ("Please enter an integer for Y:");
scanf("%d", &y);

if ((x > 0) && (y > 0))
{
int product = 0;
for (y; y > 0; y--)
product = product+x;

printf ("The Product is: %d\n", product);
}

else
puts ("Please enter an integer for BOTH values");

break;

case 2:
printf("Please enter an integer for X:");
scanf("%d", &x);

printf ("Please enter an integer for Y:");
scanf("%d", &y);

if ((x > 0) && (y > 0))
{
int counter = 0;

 while(y <= x)
{
counter++;
x=x-y;
}

printf ("The Quotient is: %d\n", counter);
}

else
puts ("Please enter a positive integer for BOTH values");

break;

case 3:

printf("Please enter an integer for the factorial:");
scanf("%d", &x);

if (x > 0)
{
int total = x;

for (x; x >0 ; x--)
{
if (total != x)
total = total *x;
}
printf ("The total is: %d\n", total);
}

else
puts("Please enter a positive integer.");
break;

case 4:

printf("Please enter an integer to check if it is prime:");
scanf("%d", &x);

if (x < 1)
puts ("Stop being a smart ass, please enter a positive number. PS 0 is still not a positive number.");

else if (x == 1)
 puts("It's  prime number.");

else if(x ==2)
puts ("It's a prime number.");

else if(x%2 == 0)
puts ("It's not a prime number");

else
{
int catch =0;
for (int isprime = 3; isprime < x/2; isprime+=2)
{
if (x%isprime == 0)
{
puts("Its not a prime");
catch = 1;
break;
}
}
if (catch ==0)
puts("It is a prime");
}
break;

case 5:puts("Exiting Program.....");

break;

default:puts("Please Enter a Valid Input....");
break;
}
}while(choice != 5);

}
