#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *OnetoTen(){
   for(int i =0; i<10; i++){
       printf("%d", i);
   }
   pthread_exit(NULL);
}
void *Square(){
    for(int i = 0; i<10; i++){
        printf("%d", i*i);
    }    
    pthread_exit(NULL);
}

int main(){
    pthread_t threads;
    int tone;
    tone = pthread_create(&threads, NULL, OneToTen, NULL);
    tone = pthread_create(&threads, NULL, Square, NULL);
    pthread_exit(NULL);
    return 0;
}