#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

struct DataStruct {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data u;
    struct DataStruct s;

    printf("Size of union: %d bytes\n", sizeof(u));
    printf("Size of structure: %d bytes\n", sizeof(s));

    u.i = 100;
    printf("Union int: %d\n", u.i);

    u.f = 3.14;
    printf("Union float: %.2f\n", u.f);

    printf("Union int after writing float: %d\n", u.i);

    return 0;
}
