#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define count 512


int main(){
        char var[count];
        int fd, fp;
        int m;
	int desc;
        printf("Introdueix el nom d'un arxiu \n");
        scanf("%s",var);
        if ((fd = open(var, O_RDONLY))== -1){
		printf("L'arxiu %s no existeix\n",var);
       	}
	if ((fp = open("copia.fi", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU)) == -1){
		printf("Error al copiar l'arxiu\n");
	}else{while((m=read(fd, var, count))!= 0){write(fp, var, m);}}
}
