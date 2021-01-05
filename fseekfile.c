#include<stdio.h>
#include<stdlib.h>

int main()
{	
FILE *fp;

 fp=fopen("a.txt","r+");
 char ch;

if(fp == NULL)
{
	printf("Unable to open the file \n");
	return -1;
 
}
else
{
	fseek(fp,-10L,SEEK_END);
	fputc('1',fp);

	fseek(fp,0L,SEEK_SET);
	
	while((ch=fgetc(fp)) != EOF)	
	{	
	  putchar(ch);
	}
	fclose(fp);
}



return 0;
}
