

#include <iostream>

void main() {

    int a = 5;
    int b = 6;

    printf("a = %d ; b = %d \n", a, b);

    int tmp = a;
    a = b;
    b = tmp;

    printf("a = %d ; b = %d \n", a, b);

}