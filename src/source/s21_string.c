#include "../headers/s21_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main() {
//    char* str = "Hello, world!";
//    int c =  48;
//    size_t n = 5;
//    void* s21_result;
//    void* result;
//    s21_result = s21_memchr(str, c, n);
//    result = memchr(str, c, n);
//    if (s21_result == result) {
//        printf("OK!");
//    } else {
//        printf("XUYOK!");
//    }
//
//    return 0;
//}

void* s21_memchr(const void *str, int c, s21_size_t n) {
    unsigned char* sym = NULL;
    unsigned char* arr = (unsigned char*)str;
    for(s21_size_t i = 0; i < n; i++) {
        if(*arr == c){
            sym = arr;
            break;
        }
        arr++;
    }
    return sym;
}