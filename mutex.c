#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>



pthread_mutex_t lock1, lock2;

int main(){

    pthread_mutex_init(&lock1, NULL);
    pthread_mutex_init(&lock2, NULL);

    pthread_t t[10];
    int tids[10];

    

    pthread_create(&t1[1],NULL,&resource2, &tids[1]);

    for(int i = 0; i < 10; i++){
        if(i%2 == 0){
            pthread_create(&t[i],NULL,&resource1, &tids[i]);
            pthread_join(t1[i], NULL);
        }
        pthread_create(&t[i],NULL,&resource2, &tids[i]);    
    }

for(int i = 0;i < 10; i++){
    if(pthread_join(t1[i], NULL) != 0){
        return 0;
    }

    pthread_mutex_destroy(&lock1);
    pthread_mutex_destroy(&lock2);

}
    
    




    

}