#include<stdio.h>

int swap(int ival1,int ival2)
{
int tmp;
tmp=ival1;
ival1=ival2;
ival2=tmp;

printf("\nswapped value of ival1 is %d \n",ival1);

printf("\nswapped value of ival2 is %d \n",ival2);

return 0;
}



int main()
{

int ino1,ino2;

printf("enter the number 1st \n");

scanf("%d",&ino1);

printf("enter the number 2nd \n");

scanf("%d",&ino2);

swap(ino1,ino2); 

return 0;
}
