//use of fwrite ND fread function 
#include<stdio.h>
#include<stdlib.h>


struct name
{
	char first_name[20];
	char last_name[20];
};

struct phonebook_entry 
{
	struct name person_name;
	char mobile_no[];
};

int min()
{
	FILE *fp;
	char ch;
	struct phonebook_entry p;
	
	fp=fopen("phonebook.txt","wb+");
	if(fp==NULL)
	{
		printf("Unable to open file \n");
		exit(12);	
	}
	
	while(1)
	{	
	 printf("ENter the detail of person \n");
	 
	 printf("Enter the first name of the person \t");
	 gets(p.person_name.first_name);
	
	 printf("enter the last name of the person\t");
	 gets(p.person_name.last_name);
	
	 printf("enter the mobile number \n");
	 gets(p.mobile_no);	

         fwrite(&p,sizeof(p),1,fp);
	 prinf("DO YOU WANT TO ENTER MORE RECORDS (Y/N)\t");
	 scanf("%c",&ch);
	 fflush(stdin);

	  if(ch!='y'||ch!='Y')
             break;		
	}
	
	rewind(fp);
	printf("\n \n Phonebook entries present in filebook are: \n");
	printf("%-20s%-20s%-15s","First_Name","Last_Name","Mobile\Number");
	printf("--------------------------------------------------------");
	
	while((fp) != EOF)	
	//while(!=feof(fp))
	{
		fread(&p,sizeof(p),1,fp);
		 if((fp)==EOF)
		//while((ch=fgetc(fp1)) != EOF)
		  break;
		 else
		  printf("%-20s%-20s%-15s\n",p.person_name.first_name,p.person_name.last_name,p.mobile_no);
			
	}
	
	fclose(fp);

return 0;
}

