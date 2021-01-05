#include<stdio.h>
#include<stdlib.h>

int main()
{

 FILE *fp;
 int i;


  fp=fopen("a.txt","w");

  if(fp == NULL)
   {
     printf("Unable to open the file\n");
     exit(1);	
   }
   else 
   {
     i=fputs("Hello Readers\n",fp);
     printf("the value returned by the function puts %d\n",i);	
   }
  fclose(fp); 
 
return 0;
}
