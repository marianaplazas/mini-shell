#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
int main(void)
{
	char *line = NULL;
	size_t len = 0;
	char **token;
	
	while (1) 
	{
		printf("$ ");
		getline(&line, &len, stdin);
		token = _strtok(line); 
		//	printf("%s", token[3]);
// agregar el nul luego del srtok
	}

	free(line);
	exit(98);
	return(0);
}
