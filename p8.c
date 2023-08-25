#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc,char* argv[]){
int fd_read;
int flag=0;
char buf[200];
fd_read=open(argv[1],O_RDONLY);
int ind=0,read_char=0;
buf[0]='\0';
while(1){

read_char=read(fd_read,&buf[ind],1);
//if(read_char==0)
//	break;
if(buf[ind]=='\n')
{
	//printf("%s",buf);
        write(STDOUT_FILENO,&buf,ind+1);
	
	ind=-1;
	for(int i=0;i<ind;i++){
	buf[ind]='\0';
	}
}
ind++;
if(read_char==0)
        break;
}

//write(STDOUT_FILENO,buf,ind);
close(fd_read);
return 0;
}
