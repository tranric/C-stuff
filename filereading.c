#include <stdio.h>
#include <stdlib.h>

int main(void){
	


//setting up a file structure
FILE *fp, *fp1;
char *name = "filename.txt"

fp=fopen(name, "r");
fp1=fopen(name, "w");
//variable = fopen (name, "mode");

	if (fp == NULL)
	{
		
		puts("Error, file not opened");
		//exit(1);
		
	}

	else
	{
		
		//read from a file
		fgets(name,20,fp);
		
		//read a character
		ch = fgetc(stdin); 
		//same as
		//char ch=fgetc(fp);
		//char ch = getchar();
		fscanf(fp,"%d",&integer);
		
		
		//write to a file
		
		fputs(name,20,fp);
		
		//writes a character to file
		fputc('ch', fp); //putchar(stdout);
		fprintf(fp,"%d",integer);
		
		//file position pointer is defined within the FILE structure
		rewind(fp);
		while(!feof(fp))
		{
			ch = fgetc(fp);
			//do something to it...
			putchar(ch, fp1);
		}
		
		
	}	
	
	//close the file
	fclose(fp);
	fclose(fp1);

}

//modes... how do you wish to open the file
//r - for read only, w for writing
//a - for appending/ writing at end
//r+ or w+ - opens an existing file for reading and writing
//w and w+ destroy file if exist and recreates it
//a+ reading and writing but appending at the end
//r+ is for anywhere while a+ is only at the end
//add b for another option
//rb, ab, wb, rb+, wb+, ab+
//exclusive file - locked file
//

