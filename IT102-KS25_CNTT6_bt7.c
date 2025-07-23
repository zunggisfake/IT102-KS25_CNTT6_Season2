#include <stdio.h>
int main () {
    int a = 12345;
    int result = a % 10;
    int newNumber = a / 10;
    int tong = result;
    printf("So lay ra duoc la %d\n", result);

    result = newNumber % 10;
    tong += result;
    newNumber /= 10;
    printf("So lay ra duoc la %d\n", result);

    result = newNumber % 10;
    tong += result;
    newNumber /= 10;
    printf("So lay ra duoc la %d\n", result);

    result = newNumber % 10;
    tong += result;
    newNumber /= 10;
    printf("So lay ra duoc la %d\n", result);

    result = newNumber % 10;
    tong += result;
    newNumber /= 10;
    printf("So lay ra duoc la %d\n", result);
    printf("Tong la %d", tong);
}