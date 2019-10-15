
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define Name "Nayan Pandey" //Store value of my Name in defined Constant

int main()
{
	char buffer[100];//To create Char array nammed Buffer
	
	sprintf(buffer,"CSC 415, This program has been written by %s! \n", Name);	// To read and to formats the String into buffer value
	
	write(1,buffer,strlen(buffer));//To print the buffer value as program output
	return 1;
}

