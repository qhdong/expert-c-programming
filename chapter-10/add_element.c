#include <stdio.h>
#include <stdlib.h>

int current_element = 0;
int total_element = 16;

char *dynamic;

void add_element(char c) {
    if (current_element == total_element - 1) {
        total_element <<= 1;
        char *tmp = (char *)realloc(dynamic, total_element);
        if (tmp == NULL) {
            perror("realloc()");
            return;
        }
        dynamic = tmp;
        printf("expand to %d\n", total_element);
    }
    dynamic[current_element++] = c;
}

int main(void) {
    dynamic = (char*)calloc(total_element, 1);
    for (int i = 1; i < 100; ++i) {
        add_element(i);
    }
    printf("%s\n", dynamic);
}
