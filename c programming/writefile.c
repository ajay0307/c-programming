#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
int fd=0;
int iret=0;
char arr[10]= "marvellous";
char brr[10];

if(argc != 2)
{
printf("insufficient paramenters ");
return -1;
}


fd = open(argv[1],O_RDWR);

if(fd == -1)
{
printf("file is not opend ");
return -1;
}
printf("file created sucessfully with fd ");
//close(fd);

iret = write(fd,arr,10);

if(iret == -1)
{
printf("unable to write a file");
}

printf("wring the file %s",arr);



close(fd);



return 0;
}
