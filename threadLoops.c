#include<unistd.h>

int primes[10] = {2,3,5,7,11,13,17,19,23,29};

void* routine(void* arg){
int index = *(int*)arg;
//This is an integer pointer CASTED onto a void object
printf("%d",primes[index]);
}

int main(int argc, char* argv[]){
    pthread_t th[10];
    for(int i = 0; i, 10 i++){
        if(pthread_create(&th[i], NULL, &routine, &i) != 0){
            //pthread_create('pointer to th', usually null, 'pointer to the function', 'function parameter')   )
            perror("Errror outpute here");
        }
    }
    for(int i = 0; i<10; i++){
        if(pthread_join(th[i], NULL) != 0){
            //pthread_create()
            perror("Errror outpute here");
        }
    }

}