#include<stdio.h>

#include<stdlib.h>
#include<sys/stat.h>
int main(int argc, char* argv[]){
struct stat *s;
s=(struct stat*)malloc(sizeof(struct stat));
stat(argv[1],s);
printf("File Type: ");/*
switch(s->st_mode & S_IFMT){

case S_IFREG: printf("Regular file\n"); break;
case S_IFDIR: printf("Directory\n"); break;
case S_IFCHR: printf("Character Device\n"); break;
case S_IFBLK: printf("Regular file\n"); break;
case S_IFLNK: printf("Regular file\n"); break;
case S_IFIFO: printf("Regular file\n"); break;
case S_IFSOCK: printf("Regular file\n"); break;
default: printf("Unknown file type\n"); break;	      
}*/
if(S_ISDIR(s->st_mode)){
printf("Directory File\n");
}
else if(S_ISCHR(s->st_mode)){
printf("Character File\n");
}
else if(S_ISBLK(s->st_mode)){
printf("Block File\n");
}
else if(S_ISSOCK(s->st_mode)){
printf("Socket File\n");
}
else if(S_ISLNK(s->st_mode)){
printf("Symbolic File\n");
}
else if(S_ISFIFO(s->st_mode)){
printf("FIFO or Pipe File\n");
}
else if(S_ISREG(s->st_mode)){
printf("Regular File\n");
}



return 0;
}
