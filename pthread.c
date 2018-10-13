#include <stdio.h>
#include <pthread.h>


void *PrintHello(void *threadid)
{
   //int tid; tid = (int)threadid;
   printf("Hello World!\n");
   pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
   pthread_t threads[5];
   int rc;
   int td = 0;
   for(int i=0;i<5;i++){
	   rc = pthread_create(&threads[i], NULL, PrintHello, &i);
	}

   //pthread_exit(NULL);
	return 0;
}

