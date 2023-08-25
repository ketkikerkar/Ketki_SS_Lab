
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#define MAX_READ 200

int main(){
	
char buffer[MAX_READ];
int i;
i=read(STDIN_FILENO, buffer, MAX_READ);
write(STDOUT_FILENO, buffer,i);
	return 0;
}
