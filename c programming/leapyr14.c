#include<stdio.h>

int leap(int year)
{

if (year % 400 == 0)
{

 printf("\n %d is a leap year\n",year);

}
else if( year % 100 == 0)
{

 printf("\n %d is ont a leaf year \n",year);

}
else if(year % 4 == 0)
{

 printf("\n %d is a leaf year \n",year); 

}
else
{
 
 printf("\n %d is not  a leaf year \n",year);

}

return 0;
}


int main()
{
printf("\n *****leap year***** \n ");

int ly; 
  printf("enter the leap year");
  scanf("%d",&ly);

	leap(ly);

return 0;
}
