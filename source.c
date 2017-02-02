/***********************************************************
	Author: Shawn Bond
	Date: 1/21/2017
	Effort: ~30 min
	Purpose: Use left shift opperator to increment x
***********************************************************/
#include <stdio.h>

int main(int argc, char* argv[])
{
	//initialize unsigned integer
	unsigned int x = 1;
	//counter i for loop
	int i;
	//visual explanation to help me understand whats hapening when using <<

	//x = 1        [BINARY] 0000 0000 0000 0001
	//x = (x << 1) [BINARY] 0000 0000 0000 0010
	//x = (x << 1) [BINARY] 0000 0000 0000 0100 ect.
	//x == 0 when the binary for the integer is all zeros, ex:
	//x = (x << 1) [BINARY] 0000 0000 0000 0000   = 0
	for (i = 0 ; x != 0; i++) {
		printf("%d: %u\n", i, x);
		x = (x << 1);
	}
	return 0;
} 