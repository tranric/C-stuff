//7.1
//a)address
//b)0 ,NULL, an address
//c)0

//7.2
//a)false the address operator(&) can be used and applied to get the address of 
// constants,expressions and variables without the need of hte storage class register

//a solution) false the address operator can be applied only to variables. 
//the address operator cannot be applied to variables declared with storage class register.

//b)false a pointer declared to be void cannot be dereferenced. (refer to module 7 slide 63)
//b)also true by using a cast, eg: void *ptr; int inum; ptr=&inum; to dereference with casting
//do *((int *)ptr);

//b solution) false. a pointer to void cannot be dereferenced, because there is no way to know
//exactly how many bytes of memory to dereference.

//c)true - pointers do not need the cast operation (brackets ()) to be assigned.
//c solution) false. pointers of type void can be assigned to pointers of other types, 
//and pointers of type void can be assigned to pointers of other types.

//7.3
//a) float numbers[SIZE]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
//b)float *nptr
//c)
/*for ( i=0; i <SIZE; i++)
	printf("%.1f", numbers[i]);
*/
//d) nptr=numbers;
//nptr=&numbers[0];
//e) for ( i=0; i <SIZE; i++)
	//printf("%.1f", *(nPtr + i)));
//f) for ( i=0; i <SIZE; i++)
	//printf("%.1f", *(numbers + i)));
//g)for ( i=0; i <SIZE; i++)
//printf("%.1f", nPtr[i]);

#include <stdio.h>
#SIZE 10

int main(void){
float array[10]{0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
float *ptr=;
for (int i=0; i<SIZE i++){
printf("%.1f",array[i]);
}
ptr=array;
for (int i=0; i<SIZE i++){
printf("%.1f",ptr[i]);
}
for (int i=0; i<SIZE i++){
printf("%.1f",*(ptr+i));
}
for (int i=0; i<SIZE i++){
printf("%.1f",*(array+i));
}
printf("%.1f", *(ptr+4);
printf("%.1f", ptr[4]);

//i) the value 8.8 is stored at nptr + 8
//j) the value stored would be 1.1
//7.4
//a)float *fptr;
//b)fptr= &number1;
//c)printf("the value of *fptr is %f\n", *fptr);
//d)number2 = *fptr;
//e)printf("the value of number2 is %f\n", number2);
//f)printf("the address of *fptr is %p\n", *number1);
//g)printf("the address of *fptr is %p\n", fptr);
float number1=7.3,number2;
float *fptr;
fptr =&number1;
number2 = *fptr;
printf("%f", fptr);
printf("%p", &number1);
printf("%p", fptr);
//answer key: Yes, the value is the same
}

//7.5
void exchange(float pointer1, float pointer2);
void exchange(float pointer1, float pointer2){
x=pointer1;
pointer1=pointer2;
pointer2=x;
}
int evaulate(int x, int pointera);
int evaluate(int x, int poly(y)){
return x;
}
int poly(int y);
int poly(int y){
return y;
}


//7.6
//a)adding to the value of the pointer instead of changing the address of the pointer.
//b)not speicifing which part of the array thus needing it to be *zptr[0] not zptr
//c) should be [3] not [2] as is it would be getting the values 2 as the arrays start at 0
//d)will give error at the end of for loop as it array is size 5 but for loop is not accounting
//for the 0 in the array being the start instead of 1thus making it print out the 6th
//non extistant value in the array.
//e)wrong way should be sptr=number not the other way around
//f)does not work as it is an array not a variable that holds a value.

//void pointer example: void *ptr;
//dereffercing void pointer *((int *)ptr)
//7.6 ans:
//a) zptr was not initialized. also p should be uppercase. correction zPtr = zPtr
//b) error: the pointer is not dereferenced. correction: number = *zptr;
//c)error zPtr[2] is not a pointer and should not be dereferenced.
//correction: *zPtr[2] to zptr[2];





























