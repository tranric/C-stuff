#include <stdio.h>
#include <stdlib.h>
int main(void){
int sales[4][5]={0};
int sales=0, prod=0, value=0;
int total[2][5]={0};

puts("Enter the salesperson number(0-3), followed by the product number (0-4), and the dollar value:");
do{
scanf(" %d", &sales);
	if(sales > 3){
		puts("incorrect input please choose the correct employee id (0-3):");
		continue;
	}
	/*
for(int i=0; i < sales; i++){
	if(sales==i){
		sales=i;
	}
	*/
	if (sales<0){
		break;
	}
	do{
	scanf(" %d", &prod);
	if (prod > 4 || prod<0){
		puts("incorrect input please choose the correct product number (0-4):");
		
		continue;
	}
	do{
	scanf(" %d\n", &value);
		
		if (value<0){
		break;
		break;
		break;
	}
	
	}while(value < 0);
	
	}while(prod > 0);
}	
	
	
}while(input > 0 && input < 4 );
//output table
//top row
printf("\t\t%d\t%d\t%d\t%d\t%d\t\t", 1,2,3,4);
//second row
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", 
0,sales[0][0], sales[0][1], sales[0][2], sales[0][3], sales[0][4], sales[0][5], total[0][1]);
//third row... so on
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", 
1,sales[1][0], sales[1][1], sales[1][2], sales[1][3], sales[1][4], sales[1][5], total[0][2]);

printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", 
2,sales[2][0], sales[2][1], sales[2][2], sales[2][3], sales[2][4], sales[2][5], total[0][3]);

printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", 
3,sales[3][0], sales[3][1], sales[3][2], sales[3][3], sales[3][4], sales[3][5], total[0][4]);
//last row
printf("\t\t%d\t%d\t%d\t%d\t%d\t\t", total[1][1],total[1][2],total[1][3], total[1][4], total[1][5]);
	
}


