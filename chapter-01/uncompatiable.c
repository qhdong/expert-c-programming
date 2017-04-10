#include <stdio.h>

void foo(const int argc, const char **p) {
    for (int i = 0; i < argc; ++i) {
        printf("%s\n", p[i]);
    }
}

int main(int argc, const char **argv) {
    foo(argc, argv);

    /* char *cp; */
    /* const char *ccp; */
    /* ccp = cp; */
    /* cp = ccp; */

    const int limit = 10;
    const int *limitp = &limit;
    int i = 42;
    limitp = &i;
    /* *limitp = 39; */
    int *p = (int*)&limit;
    *p = 33;
    printf("%d\n", limit);

    return 0;
}
