// main.c
#include <stdio.h>

void myFunction(); // Declaration without definition

int main() {
    myFunction(); // Linking error: undefined reference
    return 0;
}
