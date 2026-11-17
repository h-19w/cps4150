#include <stdio.h>
#include <stdlib.h>

long plus(long x, long y)
{
    return x + y;
}

void sumstore(long x, long y, long *dest)
{
    long t = plus(x, y);
    *dest = t;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: %s x y\n", argv[0]);
        return 1;
    }

    long x = atoi(argv[1]);
    long y = atoi(argv[2]);
    long z;

    sumstore(x, y, &z);

    printf("%ld + %ld --> %ld\n", x, y, z);

    return 0;
}