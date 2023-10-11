#include <stdio.h>

int main() {
    unsigned int long long a, b, next;
    int n;

    a = 1;
    b = 2;

    printf("%llu, %llu", a, b);

    for (n = 2; n < 100; n++) {
        next = a + b;
        printf(", %llu", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
