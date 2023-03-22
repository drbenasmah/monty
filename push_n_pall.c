#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 1024

int stack[STACK_SIZE];
int sp = 0;

void push(int val, int line_num) {
    if (sp >= STACK_SIZE) {
        fprintf(stderr, "L%d: Error: Stack overflow\n", line_num);
        exit(EXIT_FAILURE);
    }
    stack[sp++] = val;
}

void pall() {
    for (int i = sp - 1; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    // Example usage:
    push(1, 1);
    push(2, 2);
    pall();  // Prints "2\n1\n"
    return 0;
}
}
