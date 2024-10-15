// file1.c
#include <stdio.h>

static void myFunction() { // Static function

}

void callMyFunction() {
    myFunction(); // OK
}

// file2.c
#include <stdio.h>

void callMyFunction(); // Declaration

int main() {
    callMyFunction(); // Linking error: myFunction is not visible
    return 0;
}
