#include <string.h>

#define N 65536

#define SMART_COPY memcpy(des, src, N)
#define DUMB_COPY for(int i = 0; i < N; ++i) des[i] = src[i]

int main() {
    char src[N];
    char des[N];
    for (int i = 0; i < 100; ++i)
        DUMB_COPY;
        /* SMART_COPY; */
    return 0;
}
