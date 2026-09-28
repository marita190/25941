#include <stdio.h>
#include <unistd.h>

int main(int argc,  char *argv[]){
	int opt;

	while ((opt = getopt(argc, argv, "ips)) != -1){
		switch(opt){
			case 'i':
				printf("real %d and effective UID %d\n", getuid(), geteuid()); 
       				printf("real %d and effective GID %d\n", getgit(), getegid());
				break;

			case 'p':
    				printf("PID: %d\n", getpid());
   			 	printf("PPID: %d\n", getppid());
    				printf("PGID: %d\n", getpgrp());
    				break;
			defaulte:
				printf("Unknow opt");
				return 1;
		}
	}

	return 0;
}
