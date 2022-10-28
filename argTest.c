#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

    char *ptr;
    double result = strtod(argv[1], &ptr);
    printf("Test : %.2f\n",result);


    return 0;
}