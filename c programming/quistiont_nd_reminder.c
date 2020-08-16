#include<stdio.h>

int fun()
{
int a,b,c;
printf("enter the values\n");
scanf ("%d%d",&a,&b);
c=a/b;
printf("\nquationt %d\t",c);
c=a%b;
printf("\nremindor %d\t",c);


return 0;
}



int main()
{
fun();

return 0;
}

