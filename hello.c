#include <stdio.h>

int main(void) {
	
	char name[20];
	
	printf("Como te llamas? ");
	gets(name);
	printf("Hola %s\n", name);

	return 0;
	}