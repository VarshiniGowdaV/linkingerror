// main.c
#include <stdio.h>

void myFunction(int); // Declaration

void myFunction() { // Definition does not match
    printf("Hello, World!\n");
}

int main() {
    myFunction(5);
    return 0; // Linking error: function prototype does not match
}
