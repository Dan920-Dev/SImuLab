#include <iostream>
#include <cmath>

using namespace std;

void funCuadradosP(int*, int, int);

int main(){
    int t, b, n;

    cout << "digite la longitud del arreglo: \n";
    cin >> t;

    int myArray[t];

    for (int i = 0; i < t; i++)
    {
        cout << "Ingrese un dato entero: \n";
        cin >> myArray[i];
    }

    cout << "Ingrese un dado b: \n";
    cin >> b;
    cout << "Ingrese un dado n: \n";
    cin >> n;
    
    funCuadradosP(myArray, n, b);

    return 0;
}


void funCuadradosP(int* A, int n, int b){
    int cont = 0;
    
    for (int i = 0; i < n; i++)
    {
        
        if (A[i] > b)
        {
            cont++;
        }
        
    }
    cout << "El total de numeros mayores  es: " << cont;
}