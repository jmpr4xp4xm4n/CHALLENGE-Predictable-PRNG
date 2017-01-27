#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t i, x = 1;
    for (i = 0; i < 10; i += 1) {
        x = 134775813 * x + 1;
        printf("%u\n", x);
    }
    return 0;
}
