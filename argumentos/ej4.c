#include <stdio.h>

int main(int argc, char *argv[]){
	size_t i;
	if(argc != 2){
		puts("Error en linea de argumentos");
		return 1;
	}
	for(i = 0; argv[1][i] != '\0'; i++);
	printf("Largo de la cadena: %zd\n",i + 1);
	return 0;
}
