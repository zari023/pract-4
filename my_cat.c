#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define count 512


int main(){
	char var[count];
	int fd;
	int m;
//	printf("Introdueix el nom d'un arxiu \n");
	scanf("%s",var);
	if ((fd = open(var, O_RDONLY))== -1){
		printf("L'arxiu %s no existeix\n",var);
	}else{ 
		while((m=read(fd, var, count))!= 0){
			var[m]='\0';
			printf("%s",var);}
		}
	}

	
		
