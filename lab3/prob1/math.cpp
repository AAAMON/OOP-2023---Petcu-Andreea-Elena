#include "math.h"
#include <cstdarg>
#include <cstring>
#include <iostream>
#include <stdlib.h>

int Math::Add(int a, int b) {
    return a + b;
}
int Math::Add(int a, int b, int c) {
    return a + b + c;
}
int Math::Add(double a, double b) {
    return a + b;
}
int Math::Add(double a, double b, double c) {
    return a + b + c;
}

int Math::Mul(int a, int b) {
    return a * b;
}
int Math::Mul(int a, int b, int c) {
    return a * b * c;
}
int Math::Mul(double a, double b) {
    return a * b;
}
int Math::Mul(double a, double b, double c) {
    return a * b * c;
}

int Math::Add(int count, ...) { // sums up a list of integers
    va_list args;
    int sum = 0;
    va_start(args, count);
    for (int i = 0; i < count; i++)
        sum += va_arg(args, int);
    return sum;
}
char* Math::Add(const char * a, const char * b) {
    int n1 = atoi(a);
    int n2 = atoi(b);
    int sum = n1 + n2;
    int len = 0;
    int aux = sum;
    while (aux) {
        len++;
        aux /= 10;
    }
    char* s = new char[len+1];

    sprintf(s, "%d", sum);

    return s;
}