#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	fd_set rfds;
	struct timeval tv;
	int retval;
	FD_ZERO(&rfds);
	FD_SET(0,&rfds);
	tv.tv_sec=10;
	tv.tv_usec=0;
	retval=select(1,&rfds,NULL,NULL,&tv);
	if(retval==-1) perror("ERROR Occurred");
	else if(retval) printf("Data is available for reading within 10 seconds");
	else printf("Data is not available for reading within 10 seconds");
	return 0;}
