/* 
   Ina & Diana
   This is a program that computes a user's body mass index (BMI) when given
   the user's measurements (in pounds/inches or kg/metres). The program
   also determines whether the user is underweight, normal, overweight, or
   obese.
*/

#include <stdio.h>

int main()
{

   double w, h, bmi, meas;

   puts("Press 1 to enter measurements in pounds/inches, 2 for kg/meters");
   puts("[To exit, type any other integer]: ");
   scanf("%lf",&meas);

   // While the user continues to enter heights/weights, compute BMI
   while ((meas == 1)||(meas == 2)) 
   {
   
      // Compute BMI using pounds/inches
      if (meas == 1)
      {
         printf("Enter your weight: ");
         scanf("%lf",&w); 

         printf("Enter your height: ");
         scanf("%lf",&h);

         bmi = (w * 703)/(h*h);
      }

      // Compute BMI using kg/metres
      if (meas == 2)
      {
         printf("Enter your weight: ");
         scanf("%lf",&w); 

         printf("Enter your height: ");
         scanf("%lf",&h);

         bmi = w/(h*h);
      }

      printf("\n\nBMI VALUES\t\n");
      puts("Underweight: less than 18.5");
      puts("Normal:      between 18.5 and 24.9");
      puts("Overweight:  between 25 and 29.9");
      puts("Obese:       30 or greater");
      
      printf("\nYour BMI is: %.1lf\n", bmi);
      
      // Determine if the user is underweight, normal, overweight or obese
      if (bmi < 18.5) 
         puts("This is an underweight BMI");
      
      else if ((bmi >= 18.5)&&(bmi <= 24.9))
         puts("This is a normal BMI");
      
      else if ((bmi >= 25)&&(bmi <= 29.9))
         puts("This is an overweight BMI");
      
      else 
         puts("This is an obese BMI");
         
      // Ask user to enter measurement preferences again or exit program   
      puts("\nPress 1 to enter measurements in pounds/inches, 2 for kg/meters");
      puts("[To exit, type any other integer]: ");
      scanf("%lf",&meas);
   }

   puts("Terminating program. Have a nice day!");   

   return 0;
}

