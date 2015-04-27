//HW 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){

	int memsize, numtomake;
	memsize = 65536;
	numtomake = 100;
	srand((unsigned) time(NULL));
	for(int n = 0; n <numtomake; n++){
		printf("%x\n", rand() % memsize);
	}
	return 0;
}