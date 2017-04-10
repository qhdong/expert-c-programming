#include <stdio.h>

int main() {
    if (-1 < (unsigned int)1) {
        printf("-1 < 1 ANSI\n");
    } else {
        printf("-1 >= 1 K&R\n");
    }
}
