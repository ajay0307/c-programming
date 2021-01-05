#include<stdio.h>
#include<stdlib.h>

int main()
{

  FILE *fp1,*fp2;
  char ch;
	fp1=fopen("a.txt","r");
	fp2=fopen("b.txt","a");

	if(fp1==NULL ||fp2==NULL)
	{
	
		printf("Unable to copy the data");
		return -1;	
	}
	else
	{
		//printf();	
		while((ch=fgetc(fp1)) != EOF)
		{
		  fputc(ch,fp2);	
		}
		fcloseall();
	}

return 0;
}
