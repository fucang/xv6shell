/*************************************************************************
	> File Name: io.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2017年08月29日 星期二 12时07分59秒
 ************************************************************************/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main() {
//	char buf[512];
//	int n;
//	for (; ;) {
//		n = read(0, buf, sizeof(buf));
//		if (n == 0) {
//			break;
//		}
//		if (n < 0) {
//			fprintf(2, "read error\n");
//			exit(0);
//		}
//		if (write(1, buf, n - 1) != n) {
//			fprintf(2, "write error\n");
//			exit(0);
//		}
//	}
	
//	char *argv[2];
//	argv[0] = "cat";
//	argv[1] = 0;
//	int pid = fork();
//	if (pid == 0) {
//		close(0);
//		open("y", O_RDONLY);
//		execv("cat", argv);
//	} else {
//		open("y", O_RDONLY);
//		execv("cat", argv);
//	}

	int pid = fork();
	int stat;
	if (pid == 0) {
		write(1, "hello ", 6);
		exit(EXIT_SUCCESS);
	} else {
		wait(&stat);
		write(1, "world\n", 6);
	}
	return 0;
}
