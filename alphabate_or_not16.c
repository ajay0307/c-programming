#include<stdio.h>

int alphabate(char val)
{

if(val >= 65 && val <= 90 )
{

 printf("%c character is alphabet  ",val); 
  }
else if(val >= 95 && val <= 122 )
  {
	printf("%c character is small ",val); 	
	}
else
 {
	printf("\nits a not capital nor small letter\n ");	
	}

return 0;
}


int main()
{

char ch;
printf("\nenter the character\n");
scanf("%c",&ch);
alphabate(ch);
return 0;
}
