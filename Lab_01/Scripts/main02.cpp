#include <iostream>

using namespace std;


bool validation(string, int);

int main(){

    string cadena;
    int num;

    cout << "Escriba un nombre: \n";
    cin >> cadena;

    cout << "Escriba un numero: \n";
    cin >> num;

    cout << validation(cadena, num);


    return 0;
}


bool validation(string cadena, int num){
    int suma = 0;

    for (int i = 0; i < cadena.size() ; i++)
    {
        int index = cadena[i];
        if (index >= 65 && index <= 90){
            suma += index;
        }
    }
    
    if(suma == num){
        return true; // 1 
       // cout << "true";
    }else{
        return false; // 0
        // cout << "false";
    }
}