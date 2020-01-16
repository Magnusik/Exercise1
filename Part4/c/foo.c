#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int i = 0;

void* incrementingThreadFunction(){
    for (int k=0; k<=1000000; k++)
    {
      i++;
    }
    printf("hello from increment ");
    return NULL;
}

void* decrementingThreadFunction(){
    for (int k=0; k<=1000000; k++)
    {
      i--;
    }
    printf("hello from decrement\n");
    return NULL;
}

int main(){
    pthread_t incrementingThread;
    pthread_t decrementingThread;
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);

    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);

    printf("The magic number is: %d\n", i);
    return 0;
}
