//Auth: Pr0metheus
//14.06.2020
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define STRLEN 280 //Length of String Returned (Change for more than two digits!)
#define INTNUM 6 //Change For Number of Integers Needed from File/Stdin

char* num2word (int num);
int* get_ints (const char* file_name);
void write2file (const char* file_name, int*);
void write2out (int * arr);
int* get_ints_stdin();

char ones[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
char teens[10][10] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
char tens[9][10]={"twenty ","thirty ","fourty ","fifty ","sixty ","seventy ","eighty ","ninty "};

