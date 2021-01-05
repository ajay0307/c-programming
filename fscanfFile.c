//the function fscanf and fprintf
#include<stdio.h>
#include<stdlib.h>

 selectionsort(int num[],int noe)
	{
	  int i,j,min,temp;
	  for(i=0;i<noe-1;i++)
          {
	    min=i;
	    for(j=i+1;j<noe;j++)
	       if(num[i]<num[min])
		min=j;
		 {
		  temp=num[min];
		  num[min]=num[i];
		  num[i]=temp;
		 }
		
	     }
	 
	  }

int main()
{
	FILE *fp;
	char str[50],*p;
	int i,noe,num[50];

	fp=fopen("marks.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open a file \n");
		exit(1);	
	}

	      fscanf(fp,"%d",&noe);
		for (i=0;i<noe;i++)
		  fscanf(fp,"%d",&num[i]);			
		fclose(fp);

		selectionsort(num,noe);
		
		fp=fopen("marks.txt","a");
		if(fp==NULL)
		{
		  printf("PROBLEM in accesing the file \n");
		  exit(1);
		}	
		fprintf(fp,"\nlist of marks in sorted order is: \n");
	        for(i=0;i<noe;i++)
		  fprintf(fp,"%d\t",num[i]);
		fclose(fp);
	

return 0;

}
