#include<stdio.h>
#include<stdlib.h>

int main()
{

FILE *fp1,*fp2;
char ch;

  fp1=fopen("a.txt","r");
  fp2=fopen("b.txt","w");
	
  if(fp1==NULL || fp2==NULL) 
   {
	printf("unble to open file \n");
	return -1;	
   }
   else
   {
	while((ch=fgetc(fp1)) != EOF)
	{
	  fputc(ch,fp2);	
	
	}
	printf("\n");
   }	
   fclose(fp1);
   fclose(fp2);


return 0;
}
