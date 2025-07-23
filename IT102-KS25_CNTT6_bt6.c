#include <stdio.h>

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 5;
    int c = 7;
    int d = 9;
    int result = a * b - 2 * c + 3 * (a-d);
    printf("Ket qua cau phep tinh la %d\n", result);
}
