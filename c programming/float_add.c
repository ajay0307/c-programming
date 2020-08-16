//write a programm to add a two flotting point numbers


#include<stdio.h>


float fun(float y, float z)
{
float x;
x=y+z;

return x;
}

int main()
{
float a,b,c;
printf("enter the floating number\n");

scanf("\n %f \n",&a);

scanf("\n %f \n",&b);

  c=fun(a,b);

printf("\nfloating addtion is =\t %f\n",c);
return 0;
}
