#include <stdio.h>

int main() {
    int init[4] = {1, 2, 3, 4};
    printf("size init: %llu, int size: %llu \n", sizeof(init), sizeof(int));
    for (int i = 0; i < sizeof(init) / sizeof(int); i++) {
        printf("value: %d \n", init[i]);
    }
    return 0;
}