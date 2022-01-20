#include <stdio.h>

/**
 * 测试使用
 */
void sample();

void string_print();

void float_tutorial();

int main() {
    float_tutorial();
    return 0;
}

void sample() {
    int init[4] = {1, 2, 3, 4};
    printf("size init: %llu, int size: %llu \n", sizeof(init), sizeof(int));
    for (int i = 0; i < sizeof(init) / sizeof(int); i++) {
        printf("value: %d \n", init[i]);
    }
}

/**
 * c语言中的字符
 */
void string_print() {
    char a = 'a';
    char char_1 = '1';
    char char_0 = '0';
    wchar_t zhong = L'中';
    printf("char 1: %c \n", char_1);
    printf("宽字符: %c", zhong);
}

void float_tutorial() {
    float a = 3.14f;
    double b = 3.14;
    printf("float: %0.2f, size: %llu", a, sizeof(float));
    printf("double: %0.2f, size: %llu", b, sizeof(double));
}