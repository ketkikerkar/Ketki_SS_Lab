#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[]){
int fd=open("file11c.txt",O_RDWR|O_APPEND|O_CREAT,S_IRUSR|S_IWUSR);
if(fd==-1){
printf("Error opening file");
}

int fd_dup1=dup(fd);
int fd_fcntl=fcntl(fd,F_DUPFD,0);

write(fd,"Original file descriptor:",25);

char buff[10],buff2[10];
int n=sprintf(buff,"%d",fd);
write(fd,buff,n);


write(fd,"\nDuplicate file descriptor:",26);
int m=sprintf(buff2,"%d",fd_fcntl);
write(fd,buff2,m);

close(fd);
close(fd_fcntl);


return 0;}
