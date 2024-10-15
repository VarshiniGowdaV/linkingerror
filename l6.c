// C code expecting to link with C++
extern "C" {
    void myFunction();
}

// main.c
void myFunction(); // Declaration
// No definition in C++, leading to linking error.
