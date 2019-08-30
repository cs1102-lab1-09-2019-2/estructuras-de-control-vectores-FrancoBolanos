/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>

using namespace std;

int main() {
    int n, i=1, a=0, b=1;
    cout<<"Ingresar un nùmero:\n";
    cin>>n;


    while (i<n){i++;
        a=0;
        b=0;
        while (a<i) {a++;
            cout<<a;
        } while (b<n-a) {b++;
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}
