//check the whether a given word exist in a file or not.if it exists ,find the number of times it occurs.\

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char file[50],word[50],temp[50],ch;
	int count=0,i=0;
	printf("Enter the name of the file \t");
	gets(file);
	
	fp=fopen(file,"r");
	
	if(fp==NULL)
	{
	printf("Unable to open the file \n");
	exit(1);	
	}
	
	printf("Enter the word ,you want to look for \n");
	gets(word);
	
	while((ch=fgetc(fp)) != EOF)
	{
	if(ch==' '||ch == '\n')
	{
	  temp[i]='\0';
	  if(strcmp(word,temp)==0)
	   count++;
	  i=0;	
	}
	else
	{
		temp[i++]=ch;	
	}
	
}
printf("the number of words present in the file are %d\n",count);	
	
	
return 0;
}


