// file1.c
void funcA() {
    funcB(); // Calling funcB
}

// file2.c
void funcB() {
    funcA(); // Calling funcA
}
// No definitions for funcA and funcB during linking leads to undefined references.
