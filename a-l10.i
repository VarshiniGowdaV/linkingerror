# 0 "l10.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "l10.c"

void myFunction() {
    asm("movl $0, %eax");
}

int main() {
    myFunction();
    return 0;
}
