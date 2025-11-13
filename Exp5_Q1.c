#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.5;
    char c = 'A';

    int *ptrInt;
    float *ptrFloat;
    char *ptrChar;

    ptrInt = &a;
    ptrFloat = &b;
    ptrChar = &c;

    printf("Integer variable value: %d\n", a);
    printf("Address stored in int pointer: %p\n", ptrInt);
    printf("Value pointed to by int pointer: %d\n\n", *ptrInt);

    printf("Float variable value: %.2f\n", b);
    printf("Address stored in float pointer: %p\n", ptrFloat);
    printf("Value pointed to by float pointer: %.2f\n\n", *ptrFloat);

    printf("Character variable value: %c\n", c);
    printf("Address stored in char pointer: %p\n", ptrChar);
    printf("Value pointed to by char pointer: %c\n", *ptrChar);

    return 0;
}

