#include <stdio.h>
#include "main.h"

/**
* main - print sum of even fibonacci numbers
" 
* Result: Success (0).
*/

int main(void)
{

int a;
int fibsum = 0;
int evennum;
int firstnum = 0;
int secondnum = 1;
int nextnum = firstnum + secondnum;

 for (a = 1; a <= 50; a++)
   {
     firstnum = secondnum;
     secondnum = nextnum;
     nextnum = firstnum + secondnum;

     if (nextnum <= 4000000
     if ((nextnum % 2) == 0)
       evennum = nextnum;
     fibsum = fibsum + evennum;
     
     if (nextnum <= 4000000 && nux
     
