#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main(void){
int fd;
fd=creat("myfile",S_IRUSR | S_IWUSR);
printf("fd=%d\n",fd);


}
