//use of the function fsetpos on an update stream
#include<stdio.h>
#include<stdlib.h>


int main()
{
  FILE *fp;
  char ch;
  fpos_t location;
  
  fp=fopen("a.txt","r+");
  
  if(fp==NULL)
  {
    printf("unable to open the file \n");
    return -1;	
  }
   else
   {
     fgetpos(fp,&location);
      //location+=18;

     fsetpos(fp,&location);
     fputs("25",fp);
      //location=0;

     fsetpos(fp,&location);
     
     while((ch=fgetc(fp)) != EOF)
 	putchar(ch);	
	
   }
      fclose(fp);





return 0;
}
