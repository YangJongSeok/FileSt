#include<stdio.h>

int main(int argc, char** argv) {

    FILE* fd;

    fd = fopen("../filetest.txt", "w+");
    if(fd == NULL) {
        printf("file open fail");
        return 0;
    }
    printf("file open success");
    fputs("file open success Write !\n", fd);
    
    return 0;
}
