/*************************************************************************
	> File Name: test.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2017年08月28日 星期一 11时10分56秒
 ************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int glob=6;  
  
char buf[]="a write to stdout\n";  
  
   
  
int main(void)  
  
{  
  
       int var=88;  
  
       pid_t pid;  
  
   
  
       if(write(STDOUT_FILENO,buf,sizeof(buf)-1)!=sizeof(buf)-1)  
  
                printf("writeerror");  
  
   
  
       printf("before fork with  换行符\n");  
  
       printf("before fork without换行符\n");     
  
       if((pid=fork())<0){  
  
                printf("fork error");  
  
   
  
       }else if(pid==0){  
  
                printf("I am is  child process,pid=%d\n",getpid());  
  
                printf("my parentprocess's pid=%d\n",getppid());  
  
                glob++;  
  
                var++;  
  
       }else{  
  
                printf("this is parentprocess,pid=%d\n",getpid());  
  
                //var++;  
  
       }  
  
   
  
       printf("pid=%d,glob=%d,var=%d\n",getpid(),glob,var);  
  
       return 0;  
  
}  
