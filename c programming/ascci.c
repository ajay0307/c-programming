// ascci value identifyer 

#include<stdio.h>


char ascci(char d)
{

printf("ASCII value of %c =  %d ",d,d);
return 0;
}




int  main()
{
char c;

printf("enter the character a to z =\n");
scanf("%c",&c);


   ascci(c);


return 0;
}
