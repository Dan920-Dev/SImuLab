#include <iostream>

using namespace std;

void funTrunc(string, int);

int main(){

    string cad;
    int n;

    cout << "ingrese una cadena: \n";
    cin >> cad;

    cout << "Ingrese valor de n: \n";
    cin >> n;

    funTrunc(cad, n);
    return 0;
}


void funTrunc(string cad, int n){
    string cadR;
    if(cad.size() < n){
        cout << "La cadena no puede ser modificada \n";
    }else{
        for(int i = 0; i < n; i++ ){
            cadR += cad[i];
        }
    }

    cad = cadR;

    cout << cad;
}