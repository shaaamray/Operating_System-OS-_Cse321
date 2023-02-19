#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
void myProcess()
{
	// child process because return value zero
	pid_t id, id1;
	id = fork();
	if (id == 0){
	    id1 = fork();
        if (id1 == 0){
	        printf("I am grandchild\n");
	    }
	// parent process because return value non-zero.
	    else{
	        wait(NULL);
		    printf("I am child\n");
	    }
	}
	// parent process because return value non-zero.
	else{
	    wait(NULL);
		printf("I am parent\n");
	}
}
int main()
{
	myProcess();
	return 0;
}

