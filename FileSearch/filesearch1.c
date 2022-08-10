#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main(int argc, char **argv)
{

    FILE *fp;
    char *line;
    char find[MAX_LEN] = "412341234123412341234";
    char *pBuf = NULL;
    int i = 0;

    line = (char *)malloc(MAX_LEN);
    if (line == NULL)
    {
        printf("line malloc fail!\n");
        return 0;
    }
    memset(line, 0x00, MAX_LEN);

    fp = fopen("../filetest.txt", "r");
    if (fp == NULL)
    {
        printf("file open fail\n");
        return 0;
    }
    printf("file open success\n\n");
    printf("find value[%s]\n\n", find);

    while (1)
    {
	char* pBuf;
        pBuf = fgets(line, MAX_LEN, fp);

        if (pBuf == NULL)
        {
            printf("find fail!\n");
            break;
        }
        pBuf[strlen(pBuf)-1] = '\0';
        printf("%d)line [%s]\n", i, pBuf);

        if (!strcmp(pBuf, find))
        {
            printf("find success!\n");
            printf("line [%s] value [%s]\n", pBuf, find);
            break;
        }
        i++;
    }

    fclose(fp);

    printf("\nfile end");

    return 0;
}

