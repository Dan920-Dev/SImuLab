#include <iostream>

using namespace std;

void cesar(string, int);
 
int main(){

    int n; string cad;

    cout << "ingrese una cadena: \n";
    cin >>  cad;
    
    cout << "Ingrese valor de n: \n";
    cin >> n;

    cesar(cad, n);

    return 0;
}

void cesar(string cad, int n){
    for (int i = 0; i < cad.size(); i++)
    {
        cad[i] = cad[i] + n;
    }

    cout << cad;
    
}