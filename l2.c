// file1.c
#include <stdio.h>

int globalVar; // Definition

// file2.c
#include <stdio.h>

extern int globalVar; // Declaration

int main() {
    printf("%d\n", globalVar);
    return 0;
}
