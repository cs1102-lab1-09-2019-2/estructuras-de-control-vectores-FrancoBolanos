#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstddef>

using namespace std;


float promedio(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
    vector <int> lista;
    int num;
    cout<<"Ingrese un número positivo, escriba -1 si ya no quiere ingresar más números:\n";
    while(true){
        cin>>num;
        if (num<0){
            break;
        }
            lista.push_back(num);
    }
    return lista;
}

float promedio(vector<int> &lista) {
    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
    float suma = 0, i=0;
    while (i < lista.size()) {i++;
        suma += lista[i];
    }
    return (suma+1) / lista.size();
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}