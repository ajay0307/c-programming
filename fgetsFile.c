#include<stdio.h>
#include<stdlib.h>

int main()
{

 FILE *fp;
 char str[50],*p;

  fp=fopen("a.txt","r");

  p=fgets(str,35,fp);
  printf(str);

  fgets(str,15,fp);
  printf(str);
  
  p=fgets(str,15,fp);
  printf(str);

  p=fgets(str,50,fp);
  printf(str);
 
  p= fgets(str,10,fp);
  printf(str);

return 0;
}
