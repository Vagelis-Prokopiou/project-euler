#include <stdio.h>

int main() {
    int i = 0, first = 0, second = 1, next = 0, sum = 0;
    for (i; i < 4000000; ++i) {
        if (next < 4000000) {
            if (i <= 1) {
                next = i;
            }
            next = first + second;
            first = second;
            second = next;
            if (next % 2 == 0) {
                sum += next;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}