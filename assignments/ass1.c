#include <stdio.h>
#include <stddef.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++)
        printf("%.2x ", start[i]);
    printf("\n");
}

void show_short(short x)  { show_bytes((byte_pointer)&x, sizeof(short)); }
void show_long(long x)    { show_bytes((byte_pointer)&x, sizeof(long)); }
void show_double(double x){ show_bytes((byte_pointer)&x, sizeof(double)); }

int main(void) {
    short  s = 12345;
    long   l = 123456789L;
    double d = 3.14159;

    printf("short:  "); show_short(s);
    printf("long:   "); show_long(l);
    printf("double: "); show_double(d);

    return 0;
}