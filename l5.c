// file1.c
#include <stdio.h>

void myFunction() {
    printf("Hello from file1\n");
}

// file2.c
#include <stdio.h>

void myFunction() { // Multiple definition of myFunction
    printf("Hello from file2\n");
}

// main.c
void myFunction();
int main() {
    myFunction();
    return 0;
}
