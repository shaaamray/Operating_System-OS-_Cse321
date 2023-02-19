#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>


int var = 0;
void *block1(void* arg){
    var++;
}

int main()
{

    pthread_t thread [6];

    for (int i=1; i<6;i++){
        pthread_create(&thread[i],NULL,block1,NULL);
        printf("thread- %d running.\n", i);
        pthread_join(thread[i],NULL);
        printf("thread- %d closed.\n", i);
    }
    return 0;
}