#include <stdio.h>

int main(int argc, char *argv[]){
		
	for(size_t i = 1; i < argc ; i++)
	       printf("%s\t",argv[i]);
	puts("");
	return 0;
}	
