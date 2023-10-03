#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main() {

    /* simple data formats with validation examples */
	int value = 0;
	do {
		printf("Integer Value? ");
	} while(!readInteger(&value)); /* loops while invalid */
		
	printf("Integer Value = %d \n", value);

	double value2 = 0;
	do {
		printf("Double Value? ");
	} while(!readDouble(&value2)); /* loops while invalid */
		
	printf("Double Value = %lf \n", value2);

	/* Strings are consumed as-is */
	char text[100];
	printf("Text? ");
	readString(text, 100);
	printf("Text = %s \n", text);

	/* Example of the spliting function; use with CSV files later */
	char line[100] = "Bruno Silva;bruno.silva@estsetubal.ips.pt;;2020/21";

	char** tokens = splitString(line, 4, ";");
	for(int i=0; i<4; i++) {
		printf("Token[%d] = %s \n", i, tokens[i]);
	}

	free(tokens); 

    return EXIT_SUCCESS;
}

