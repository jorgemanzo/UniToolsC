#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef ARRAYTOOLS_H
#define ARRAYTOOLS_H
#include "arrayTools.h"
#endif

char *infinityScanf(){
    char *arrayPointer;
    arrayPointer = makeCharArray();
    char k;
    int i;
    for(i = 0; (k = getchar()) != EOF && k != '\n'; i++){
        arrayPointer = pushbackChar(&arrayPointer,k);
    }
    return arrayPointer;
}
