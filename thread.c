 #include <stdio.h>
 #include <pthread.h>
  // This program increments the value of x in a new thread, thread_zero, after with the pthread_join we make sure the program continues after thread has been completed.
 
  void *thread_function(void *param)
  {
          int *tp = (int *) param ;
          int j = 0;
          printf("Starting thread. *tp = %d\n",*tp);
 
          for(j = 0; j<5; j++){
                  printf("thread loop %d\n",*tp);
                  *tp = *tp +1 ;
          }
          printf("thread completed *tp = %d\n",*tp);
 
  }
 
  int main(int argc,char *argv[])
  {
 
          int x = 0,y = 10;
 
          pthread_t thread_zero;
          pthread_create(&thread_zero,NULL,thread_function,&x);
          pthread_join(thread_zero,NULL);
 
          printf("x+y = %d\n",x+y);
          pthread_exit(thread_zero);
 
          return (0);
  }
