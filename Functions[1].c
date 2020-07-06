#include "head.h"

//change int num into a word 
char* num2word (int num)
{
	char* string = malloc (STRLEN);

	if (num < 10)
		strcpy(string,ones[num-1]);

	if (num > 10 && num < 20)
		strcpy(string,teens[num - 10]);

	else if (num >= 20)
	{
		strcpy(string, strcat(tens[num / 10 - 2], ones[num % 10 -1]));
	}

	return string;
}

//get ints from txt file and put them in a pointer/array
int* get_ints (const char* file_name)
{
	FILE* file = fopen (file_name, "r");
	int j = 0;
	int * arr = malloc(INTNUM*sizeof(int));
	
	while (!feof (file))
	{  
		fscanf (file, "%d", &arr[j]);    
		j++;  
	}
	fclose (file); 

	return arr;
}    

//write to output file 
void write2file (const char* file_name, int* arr)
{
	FILE* file_ptr = fopen(file_name, "w");
	for (int k = 0; k < INTNUM; k++)
	{
		fprintf(file_ptr, num2word(arr[k]));
		fprintf(file_ptr, "\n");
	}
	fclose(file_ptr);
}	  

//write to stdout
void write2out (int * arr)
{
	for (int k = 0; k < INTNUM; k++)
	{
		fprintf(stdout, num2word(arr[k]));
		fprintf(stdout, "\n");
	}
}

//get ints from stdin and put them in a pointer/array
int* get_ints_stdin()
{
	int j = 0;
	int * arr = malloc(INTNUM*sizeof(int));
	
	while (!feof (stdin))
	{  
		fscanf (stdin, "%d", &arr[j]);    
		j++;  
	}

	return arr;
}  
