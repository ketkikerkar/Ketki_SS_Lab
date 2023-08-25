


#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main(int argc, char* argv[]){
int fd;

fd=open("seekfile",O_CREAT|O_RDWR,0744);
if(fd==-1)
{
	printf("Error in opening file");
}
char buff[10];
//read(,buff,10);
write(fd,"Hi,Ketki!!",10);
int pos=lseek(fd,10L,SEEK_CUR);
printf("File position:%d\n",pos);
char buff1[10];
printf("Written sucessfully");
//read("SSProgram!,&buff1,10);
write(fd,"SS Program",10);
close(fd);
return 0;
}
