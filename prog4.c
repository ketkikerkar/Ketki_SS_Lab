#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main(void){
int fd,fd2;
fd=open("myfile3",O_RDWR| O_EXCL | O_CREAT);
fd2=open("newfile",O_RDWR |O_EXCL | O_CREAT);
printf("fd=%d\n",fd);
printf("fd2=%d\n",fd2);
getchar();


}
