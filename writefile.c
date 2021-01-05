#include<stdio.h>
//#include<iostream.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char str[255],ch;
	int i=0;
	fp=fopen("a.txt","w");
	
	if(fp == NULL)
	{
	 printf("Unable to write in to file \n"); 
	  return -1;	
	}
	else
	{
	  printf("Enter the string that what you want to write into file \n");
	  gets(str);
	  while(str[i] != '\0')
	   {
	     fputc(str[i++],fp);
	   }
	 }


	  fclose(fp);	
	}
	


return 0;
}
