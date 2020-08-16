#include<stdio.h>

evenodd(int );

int main()
{
int ino1;
printf("enter the vales\n");

scanf("%d",&ino1);

evenodd(ino1);
return 0;
}



int evenodd(int ival1)
{
if((ival1%2)==0)
{
 printf("\n value is even = %d \n",ival1);
}
else
{
 printf("\n value is odd = %d \n ",ival1);
}
return 0;
}
