#include<stdio.h>


int main()
{
printf("switch case programm");

int ch,a=10,b=20,c;
while(1)
{
printf("enter the your choise: \n0.exit \n1.add \n2.mul \n3.div \n4.div \n");
scanf("%d",&ch); 


switch(ch)
{
  case 0:
	return (0);
	break;
 
  case 1:
	c=a+b;
	printf("\nadd is = %d \t\n",c);
	break;

  case 2:
	c=a*b;
	printf("\nmul is = %d \t\n",c);
	break;
	
  case 3:
	c=a-b;
	printf("\nadd is = %d \t\n",c);
	break;
  
  case 4:
	c=a/b;
	printf("\ndiv is =%d \t\n",c);
	break;

 default:
	printf("\n enterd wrong choise\n ");
}
}
return 0;
}
