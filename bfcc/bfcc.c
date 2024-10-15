//
// bfcc is a brainfuck interpreter.
// 
// bfcc - Copyright (C) mrmeowgi4 2024-present
//

#include <stdio.h>
#include <stdlib.h>

typedef struct reader
{
	int ptr;
	char val;
};

char* tape;
size_t tape_size = 1024;

void init_tape()
{
	printf("Allocating %d tape reserved bytes\n", tape_size);
	tape = (char*)malloc(tape_size);

	if (tape == NULL)
	{
		printf("Unable to reserve tape memory.");
		exit(-1);
	}

	//memset(tape, 0, tape_size-1);

	*(tape + tape_size) = '\0'; // Use NULL char to denote the end of the tape.

	printf("Done.\n");

}

int main()
{
	init_tape();

	return 0;
}