/* 
 * File:   main.c
 * Author: Will
 *
 * Created on January 25, 2012, 11:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

void printSomething(void);
/*
 * 
 */
int main(int argc, char** argv) {
    /* Yeah... it's very cliche'd; but it will get the job done */
    printf("Hello world!\r\n");
    printSomething();
    fflush(stdout);
    return (EXIT_SUCCESS);
}

void printSomething(void) {
    /* yeahhhhhhh */
    printf("Something\r\n");
    fflush(stdout);
    return;
}