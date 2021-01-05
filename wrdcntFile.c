//count the numbre of word present in the file
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char name[50];
	int count=0;
	char ch;
	
	printf("Enter the file name \n");
	scanf("%s",&name);
	fp=fopen(name,"r");
	if(fp==NULL)
	{
		printf("Unabel to open the file \n");	
		exit(1);
	}
	
	while((ch=fgetc(fp))!=EOF)
		if(ch==' ' || ch=='\t' || ch=='\n')		
		 count++;
	printf("the number of words present in the file are\n:== %d\n",count);
	
return 0;
}
