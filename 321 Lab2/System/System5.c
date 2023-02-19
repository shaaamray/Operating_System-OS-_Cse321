#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
	int p_pid, c_pid, g1_pid, g2_pid, g3_pid;
	p_pid = getpid();
	
	pid_t id, id1,id2,id3;
	id = fork();
	if (id == 0){
	    id1 = fork();
        if (id1 == 0){
	        id2 = fork();
	        if(id2 == 0){
	            id3 = fork();
	            if(id3 == 0){
	                g3_pid = getpid();
	                printf("Grand Child process ID: %d\n", g3_pid);
	            }
	            else{
	                g2_pid = getpid();
	                printf("Grand Child process ID: %d\n", g2_pid);
	                wait(NULL);
	            }
	        }
	        else{
	            g1_pid = getpid();
	            printf("Grand Child process ID: %d\n", g1_pid);
	            wait(NULL);
	        }
	    }
	    else{
	    	c_pid = getpid();
	        printf("Child process ID: %d\n", c_pid);
	        wait(NULL);
	    }
	}
	else{
	    printf("Parent process ID: %d\n", p_pid);
	    wait(NULL);
	}
	
	return 0;
}
