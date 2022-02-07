//
// Created by 86158 on 2022/1/20.
//
#include "stdio.h"

const int glob_pin = 123;

int main(){
    int local_pin = 234;
    printf("hello variable\n");
    printf("glob_pin: %d, local_pin: %d \n", glob_pin, local_pin);
    printf("glob_pin_address: %x\n", &glob_pin);
    return 0;
}