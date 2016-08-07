#include <stdio.h>

// http://www.codeabbey.com/index/task_view/sum-of-digits

int main() {
    int i, j = 0, k;
    int height = 23;

    for (i = 0; i < height; ++i) {
        int spaces = height + 1 - 2 - i;
        int hashes = i + 2;

        // Print the spaces.
        for (j = 0; j < spaces; ++j) {
            printf(" ");
        }

        // Print the hashes.
        for (k = 0; k < hashes; ++k) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
