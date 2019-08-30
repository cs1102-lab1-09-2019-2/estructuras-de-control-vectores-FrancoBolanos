/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30

 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cout<<"Ingrese tres nùmeros separados por espacio:\n";
    cin>>a>>b>>c;
    if (a>b and a>c){
        cout<<"El valor mayor es "<<a<<".\n";
    } else if(b>a and b>c){
        cout<<"El valor mayor es "<<b<<".\n";
    } else if (c>a and c>b){
        cout<<"El valor mayor es "<<c<<".\n";
    } else if (a==b and a>c){
        cout<<"Hay 2 valores mayoresy son igual a "<<a<<".\n";
    } else if (c==b and c>a){
        cout<<"Hay 2 valores mayores y son igual a "<<c<<".\n";
    } else if (a==c and a>b) {
        cout << "Hay 2 valores mayores y son igual a " << a<<".\n";
    } else {
        cout<<"Los tres valores son iguales.\n";
    }

    return 0;
}
