#include <stdio.h>

union bits32_tag {
    int whole;
    struct {char c1, c2, c3, c4;} byte;
} value;

union byte_order {
    int a;
    char b;
};

int main() {
    value.whole = 0xcafebabe;
    printf("c1 = %x\n", value.byte.c1);
    printf("c2 = %x\n", value.byte.c2);
    printf("c3 = %x\n", value.byte.c3);
    printf("c4 = %x\n", value.byte.c4);

    union byte_order bo;
    bo.a = 1;
    if (bo.b) {
        printf("little\n");
    } else {
        printf("big\n");
    }

}
