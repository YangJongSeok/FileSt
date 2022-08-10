#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main(int argc, char** argv) {

	FILE* fd;
	char *line;
	int i = 0;

	fd = fopen("../filetest.txt", "r");
	if(fd == NULL) {
		printf("file open fail");
		return 0;
	}

	printf("file open success\n\n");

	line = (char *)malloc(MAX_LEN);
	if (line == NULL)
	{
		printf("line malloc fail!\n");
		return 0;
	}	
	memset(line, 0x00, MAX_LEN);
	
	while(1)
	{
		char* pBuf = NULL;

		pBuf = fgets(line, MAX_LEN, fd);
		if(pBuf == NULL) {
			break;
		}
		pBuf[strlen(pBuf)-1] = '\0';
        	printf("%d)line [%s]\n", i, pBuf);
		i++;
	}
	fclose(fd);
	printf("\nfile end");
	return 0;
}
