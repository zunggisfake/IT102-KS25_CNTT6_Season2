#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a = 4;
    int b = 5;
    int c = 6;
    float result = a * a * a + b * b + 2 * c + sqrt(a + b - c);
    printf("Ket qua cua phep tinh la %.3f", result);
}
