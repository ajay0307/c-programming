#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp;
char ch;
fp=fopen("a.txt","r");

	if(fp == NULL)
	{
	  printf("Unable to read the file \n");
	  return -1;			
	}
	else
	{
	  while((ch=fgetc(fp)) != EOF)
	  {
		printf("%c",ch);	
	  }	
		printf("\n");
	}
fclose(fp);
return 0;
}


