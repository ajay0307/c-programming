#include<stdio.h>


int vowel(int );

int main()
{

printf("\n||Jay Ganesh||\n");
 
char a;

printf("enter the character\n");
scanf("%c",&a);

printf("\n%c\t",a);
vowel(a);
return 0;
}


int vowel(int val)
{

if(val == 'a'||val == 'e'||val == 'i'||val == 'o'||val == 'u'||val == 'A'||val == 'E'||val == 'I'||val == 'O'||val == 'U')
{
printf("\nval is vowel\n");
}

else
{
printf("\ncharacter is consonent \n");
}

return 0;
}
