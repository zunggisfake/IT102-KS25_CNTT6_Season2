#include <stdio.h>
int main () {
    int a = 12345;
    printf("So dao nguoc la ");
    int result = a % 10;
    int newNumber = a / 10;
    printf("%d", result);

    result = newNumber % 10;
    newNumber /= 10;
    printf("%d", result);

    result = newNumber % 10;
    newNumber /= 10;
    printf("%d", result);

    result = newNumber % 10;
    newNumber /= 10;
    printf("%d", result);

    result = newNumber % 10;
    newNumber /= 10;
    printf("%d", result);

}
