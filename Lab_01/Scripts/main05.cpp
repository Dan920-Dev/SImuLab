#include <iostream>
#include <cmath>

using namespace std;

void funCuadradosP(int*, int);

int main(){
    int n;

    cout << "digite la longitud del arreglo: \n";
    cin >> n;

    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un dato entero: \n";
        cin >> myArray[i];
    }
    
    funCuadradosP(myArray, n);

    return 0;
}


void funCuadradosP(int* A, int n){
    int result = 0, cont = 0;
    
    for (int i = 0; i < n; i++)
    {
        result = sqrt(A[i]);

        if (result % 2 ==  0)
        {
            cont++;
        }
        
    }
    cout << "El total de numeros cuadrados perfectos es: " << cont;
}