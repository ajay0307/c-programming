//use of function setvbuf
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

int main()
{
	char arr[30];
	setvbuf(stdout,arr,_10FBF,30);
	puts("Fairways are narrow");
	fflush(stdout);
	puts("you have to walk down");
	puts("them in a single file");
	fclose(stdout);

return 0;
}
