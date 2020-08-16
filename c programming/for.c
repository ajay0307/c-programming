#include<stdio.h>

int main()
{
printf("demonstration of even odd  programm using a forloop \n");
int i,n;

printf("enter the number\n");
scanf("%d",&n);


for(i=0;i<n;i++)
{
if ((i%2)!=0)
{
printf("\nodd no= %d\t",i);
}
else
{
printf("\neven no= %d\t",i);
}

}


return 0;
}
