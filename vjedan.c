#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ERROR_OPENING_FILE -1
#define BUFFER_SIZE 1024

int count_rows(char* filename)
{
	FILE* file = NULL;
	file = fopen(filename, "r");
	int count = 0;

	if (file == NULL)
	{
		printf("sori nisan otvorio datoteku\n");
		return ERROR_OPENING_FILE;
	}

	while (!feof(file)) {

		fgets(buffer, BUFFER_SIZE, file);
		// sscanf() 
		++count;
	}
}


int main()
{
	
	return EXIT_SUCCESS;

}