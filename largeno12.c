#include<stdio.h>

int lno(a,b,c);

int main()
{
printf("enter the three numbers=\n");

int a,b,c;

scanf("%d%d%d",&a,&b,&c);

printf("no is= %d\t%d\t%d\t",a,b,c);

lno(a,b,c);

return 0;
}



int lno(int x,int y,int z)
{

if(x>=y&&x>=z)
{

	printf("X is greater=%d",x);

}
else if(y>=x&&y>=z)
{

	printf("y is greater=%d",y);
}
else
{

	printf("z is greater=%d",z);

}

return 0;
}
