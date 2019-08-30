/*
 Dado una funcion cuadratica, donde los parametros a, b, y c son leidos por la consola.
 Calcular las soluciones basado en las siguientes reglas:

 Leer del usuario a, b, y c separados por espacio:
 cin>>a>>b>>c;

 1.- Si a y b son cero, entonces: No tiene solucion: a==0, b ==0..
 2.- Si a es cero, entonces: Tiene una sola solucion: (-c/b)
 3.- Si b^2 -4ac es negativo, entonces: No tiene solucion: delta < 0..
 4.- En el resto de los casos tiene dos soluciones y es calculado con la siguiente
 formula:

 x1 = -b + ((b^2 - 4ac)^(1/2))/2a
 x2 = -b - ((b^2 - 4ac)^(1/2))/2a

 La ecuacion tiene dos soluciones: x1 = x1, x2 = x2
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, delta, x1, x2;
    cin>>a>>b>>c;
    delta=(b*b-4*a*c);


    if (a==0 and b==0) {
        cout<<"No tiene solucion\n";
    } else if (a==0) {
        cout<<"x = "<<-c/b<<"\n";
    } else if (delta<0){
        cout<<"No tiene solucion\n";
    } else {
        x1=(-b+(sqrt(delta)))/(2*a);
        x2=(-b-(sqrt(delta)))/(2*a);
        cout<<"x1 = "<<x1<<", x2 = "<<x2<<"\n";
    }
    return 0;
}