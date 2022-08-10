#include<stdio.h>

int main(int argc, char** argv) {

    FILE* fp;

    fp = fopen("../filetest.txt", "w+");
    if(fp == NULL) {
        printf("file open fail");
        return 0;
    }
    printf("file open success");
    
    return 0;
}
