//use of the function fsetpos on an update stream
#include<stdio.h>
#include<stdlib.h>


int main()
{
  FILE *fp1,*fp2;
  char ch;
 
  
  fp1=fopen("a.txt","r");
  fp2=fopen("b.txt","w1");
  
  if(fp1==NULL||fp2==NULL)
  {
    printf("unable to open the file \n");
    return -1;	
  }
   else
   {
     
     while(!feof(fp1))
	{
	 ch=fgetc(fp1);
 	 fputc(ch,fp2);	
	
   	}
      fclose(fp1);
      fclose(fp2);





return 0;
}
