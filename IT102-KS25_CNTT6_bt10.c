#include <stdio.h>
#include <math.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 6;
    float result;
    result = (a * a + sqrt(b * b + 4 * a * c)) / (2 * a) - ((b * b * b) / (c * c)) + sqrt(abs(a - b));
    printf("Ket qua cua phep tinh la %.3f", result);
}