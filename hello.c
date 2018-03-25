/*
 hello.c
 Hello World in C
 Misael Magi
 20180325

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *output = fopen("output.txt", "w");
	fprintf(output,"Hello World!!! :)");
	fclose(output);
	return 0;
}
