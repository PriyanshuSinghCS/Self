#include <stdio.h>

int globalVar = 10;

void display() {
    int localVar = 5;
    printf("Inside function:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n", globalVar);
}

int main() {
    display();
    printf("Global variable in main = %d\n", globalVar);

    return 0;
}
