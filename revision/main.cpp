// revision.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>



void ex1() {

    int a = 5;
    int b = 6;

    printf("a = %d ; b = %d \n", a , b );

    int tmp = a;
    a = b;
    b = tmp;

    printf("a = %d ; b = %d \n", a, b);

}

void ex2() {


}

int main(){
    
    ex1();

    
}
