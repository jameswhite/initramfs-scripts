#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
        if (argc != 2){
            printf("Usage : sleep <ms>\n");
            exit(1);
        }
        /*
           printf("usleep %s\n",argv[1]);
        */
        usleep(1000*atoi(argv[1]));
        exit(0);
}
