#include <stdio.h>

int d;

int main(void) {
    int i;
    printf("The stack top is near %p\n", &i);
    printf("The BSS top is near %p\n", &d);
}
