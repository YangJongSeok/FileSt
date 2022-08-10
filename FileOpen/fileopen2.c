#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char** argv) {

    int fp;
/*
	int open(const char *pathname, int flags);
	flag :	O_RDONLY	: 읽기
 		O_WRONLY	: 쓰기
 		O_RDWR		: 읽기, 쓰기 
		O_APPEND	: append mode로 open
		O_ASYNC		: 읽거나 쓰기를 할 수 있는 상태가 되면, SIGIO signal을 발생
		O_CLOEXEC	: exec계열함수 호출시 자동으로 이 파일을 close
		O_CREAT		: 존재하지 않으면 파일 생성
		O_DIRECTORY	: pathname이 directory가 아니면 오류
		O_EXCL		: O_CREAT와 함께 사용되며, 이미 파일이 존재하면 -1
		............
*/

    fp = open("../filetest.txt", O_WRONLY|O_APPEND|O_CREAT,0666);

    if(fp < 0) {
        printf("file open fail");
        return 0;
    }
    printf("file open success");
    
    return 0;
}
