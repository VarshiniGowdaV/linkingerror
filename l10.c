// main.c
void myFunction() {
    asm("movl $0, %eax"); // Using inline assembly
}

int main() {
    myFunction(); // Linking error if assembly syntax is incorrect
    return 0;
}
