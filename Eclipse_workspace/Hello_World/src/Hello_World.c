/*
 ============================================================================
 Name        : Hello_World.c
 Author      : Francisco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int i;
int main(void) {
	for(i = 1; i <= 20; ++i)

	{
		printf("%d\n", i);

		sleep(1);
	}

	printf("adios, programa terminado");
	return 0;

}


