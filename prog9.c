#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>
#include<time.h>


int main(){
struct stat s;
stat("prog1.c",&s);
printf("Inode number: %ld\n",(long)s.st_ino);
printf("Number of Hard links: %ld\n",(long)s.st_nlink);
printf("UID: %ld\n",(long)s.st_uid);
printf("GID: %ld\n",(long)s.st_gid);
printf("Size: %lld\n",(long long)s.st_size);
printf("Block size: %ld\n",(long)s.st_blksize);
printf("Last Access:%s\n",ctime(&s.st_atime));
printf("Last Modification time: %s\n",ctime(&s.st_mtime));
printf("Time of last change: %s\n",ctime(&s.st_ctime));

return 0;
}
