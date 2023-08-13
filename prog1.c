#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(){
int v=symlink("newfile","destSL");
if(v<0){
perror("Failed");return -1;
}
int f=link("newfile","destHL");
if(f<0){
perror("Failed");
return -1;
}
int e=mknod("file2",S_IFIFO,0);
if(e<0)
{
	perror("Failed");
}

return 0;
}
