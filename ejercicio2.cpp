#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstddef>
#include <unordered_map>
#include <bits/unordered_map.h>

using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsole();

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

int moda(vector<int> &lista) {
    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    unordered_map<int, int> map;
    int i=0;
    while (i<lista.size()) {i++;
        map[lista[i]]++;
    }
    int moda=0, max=-10;
    for (auto &it : map) {
        if (it.second > max){
            max=it.second;
            moda=it.first;
        }}
    return moda;
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}