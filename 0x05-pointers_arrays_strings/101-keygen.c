#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
* password - Random password
* @password_length: lll
*
* Return: pw
*/

int password(int password_length)
{

int i;

char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/";

printf("\t");

for (i = 0; i < password_length; i++) 
{
	printf("*");
}

printf("\n");
printf("\t");

srand(time(NULL));

for(i = 0; i < password_length; i++) 
{
	printf("%c", list[rand() % (sizeof list - 1)]);
}

printf("\n");
printf("\t");

for(i = 0; i < password_length; i++) 
{
	printf("*");
}

printf("\n");

}

