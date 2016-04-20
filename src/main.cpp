#include <stdlib.h>
#include <stdio.h>
#include "BoundedBuffer.h"
#include <time.h>

#define LENGTH 10
#define CYCLES 10
enum OperationFlag {PUT, GET};

int main(int argc, char* argv[]){
	BoundedBuffer buf(LENGTH);
	OperationFlag op;
	srand(time(NULL));
	for(int i=1; i<=CYCLES; i++){
		op = PUT;
		if(op == PUT){
			buf.put(i);
		}
		else if(op == GET){
			buf.get();
		}
	}
	buf.dump();
	return 0;
}