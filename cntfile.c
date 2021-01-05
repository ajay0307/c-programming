//count the numbre of character present in the file
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char name[50];
	int count=0;
	
	printf("Enter the file name \n");
	gets(name);
	fp=fopen(name,"r");
	if(fp==NULL)
	{
		printf("Unabel to open the file \n");	
		exit(1);
	}
	
	while(fgetc(fp)!=EOF)
		count++;
	printf("the number of character present in the file are %d\n",count);
	
return 0;
}
