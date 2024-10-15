# Compiling without linking necessary libraries
gcc main.c -o my_program -lm # If using math functions, forgot to link -lm
# Linking error for math functions like sqrt.
