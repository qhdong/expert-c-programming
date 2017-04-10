#include <setjmp.h>
#include <stdio.h>

jmp_buf buf;

void banana() {
    printf("in banana()\n");
    longjmp(buf, 1);
    printf("you will never see this, because i longjmp'd\n");
}

int main(void) {
    if (jmp(buf)) {
        printf("back to main\n");
    } else {
        printf("first time through\n");
        banana();
    }
    return 0;
}
