

#include <iostream>

int main() {

    int a = 5;
    int b = 6;
    int c = 7;

    printf("a = %d ; b = %d ; c = %d \n", a, b, c);

    int tmp = c;
    c = b;
    b = a;
    a = tmp;

    printf("a = %d ; b = %d ; c = %d \n", a, b, c);

}