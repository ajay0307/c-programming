//compare two files and check whethe two files are same or not

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	char file1[50],file2[50],ch1,ch2;
	int flag_unequal = 0;
	
	printf("ENter the 1st file name \n");
	gets(file1);
	printf("Enter the second file name \n");
	gets(file2);

	fp1=fopen(file1,"r");
	fp2=fopen(file2,"r");
	
	if(fp1==NULL || fp2==NULL)
	{
	printf("Unable to open the file \n");
	exit(1);	
	}
	
	while((ch1=fgetc(fp1)!=EOF) && (ch2=fgetc(fp2)!=EOF))
	 if(ch1 != ch2)
	  {
	  flag_unequal=1;
   	  break;	 
	  }
	
	if(flag_unequal == 1)
	 {
	 printf("file content differs \n");	
	 }
	else
	 {
	 printf("file content are same \n");	
	 }
	
return 0;
}

















