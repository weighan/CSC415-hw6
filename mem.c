//HW 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int frames*, faults, framenum;

int main(int argc, char *argv[]){

	int pagesize, logmemsize, mode;
	unsigned int input;
	if(argc != 5){
		printf("incorrect number of arguments.\n");
		return 0;
	}
	pagesize = strtol(argv[1], NULL, 10);
	logmemsize = strtol(argv[2], NULL, 10);
	framenum = strtol(argv[4], NULL, 10);
	faults = 0;
	//input check
	printf("# of frames: %d\npage size: %d\nlogical memory size: %d\n", frames, pow(2,pagesize), pow(2, logmemsize));

	if(strcmp(argv[3], "FIFO") ==0 || strcmp(argv[3], "fifo") ==0){
		printf("FIFO Mode.\n");
		mode = 0;
	}
	else if(strcmp(argv[3], "LRU") ==0 || strcmp(argv[3], "lru") ==0){
		printf("LRU Mode.\n");
		mode = 1;
	}
	else{
		printf("arg 3 must be either FIFO or LRU.\n");
		return 0;
	}
	frames = calloc(framenum, sizeof(int));

	printf("enter memory addresses\n");
	if(mode == 0){ //fifo mode
		while(scanf("%x", &input) != EOF ){
		printf("%d\n", input);
		input >> pagesize;


	}
	}
	
	else if(mode == 1){ // lru mode

	}
	


	return 0;
}


int fifosearch(int val){

	for(int i = 0; i < framenum;i++){
		if(frames[i] == val){
			return 1;
		}
	}
	return 0;
}

void lru(){

}