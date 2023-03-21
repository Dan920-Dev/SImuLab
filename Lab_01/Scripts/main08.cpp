#include <iostream>
#include <cmath>

using namespace std;

void funCuadradosP(int*, int);

int main(){
    int t;

    cout << "digite la longitud del arreglo: \n";
    cin >> t;

    int myArray[t];

    for (int i = 0; i < t; i++)
    {
        cout << "Ingrese un dato entero: \n";
        cin >> myArray[i];
    }
    
    funCuadradosP(myArray, t);

    return 0;
}


void funCuadradosP(int* A, int n){
    int cont = 0, sum = 0, result = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    result = sum / n;

    for (int i = 0; i < n; i++)
    {
        if(A[i] > result){
            cont++;
        }
    }
    

    cout << "El total de numeros mayores  es: " << cont;
}