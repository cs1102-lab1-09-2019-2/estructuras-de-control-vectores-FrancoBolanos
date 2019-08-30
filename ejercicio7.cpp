/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo

 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo

 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111

 Continuar? y

 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.

 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b){return a+b;}
int restar(int a, int b){return a-b;}
int multiplicar(int a, int b){return a*b;}
float dividir(float a, float b){return a/b;}
int modulo(int a, int b){return a%b;}


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Suma\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
}

int main() {
    int opcion;
    float resultado=0, a, b;
    char x;

    do {
        cout <<"\n";
        mostrarMenu();
        cout << "\nIngresa una opcion: ";
        cin >> opcion;
        cout << "\nIngresa los dos nùmeros: ";
        cin >> a >> b;


        switch (opcion) {
            case 1:
                resultado = sumar(a, b);
                break;
            case 2:
                resultado = restar(a, b);
                break;
            case 3:
                resultado = multiplicar(a, b);
                break;
            case 4:
                resultado = dividir(a, b);
                break;
            case 5:
                resultado = modulo(a, b);
                break;
        }
        cout << "Resultado: " << resultado << "\n";
        cout << "\n¿Continuar? y/n:\n";
        cin >> x;
    } while (x=='y');
    return 0;
}