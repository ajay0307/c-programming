#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp1,*fp2;
char ch;
long int loc1,loc2;
	
	fp1=fopen("a.txt","r");
	fp2=fopen("b.txt","a");
	
	if(fp1 == NULL || fp2==NULL )
	{
	  printf("Unable to check the position of the file \n");
	  return -1;
	}
	else
	{
	  loc1=ftell(fp1);
	  loc2=ftell(fp2);
	
	  printf("initially lacations are located ar %ld%ld\n",loc1,loc2);
	  ch=fgetc(fp1);
	  fputc("!",fp2);
	  loc1=ftell(fp1);
	  loc2=ftell(fp2);

	  printf("After I/O, indicator move to the location %ld%ld\n",loc1,loc2);
	  ch=fget(fp1);
	  fputc("!",fp2);
	  fgetpos(fp1,&loc1);
	  fgetpos(fp2,&loc2);

	  printf("finally,indicators are at the location %ld%ld\n",loc1,loc2);
	}
	closeall();


return 0;
}
