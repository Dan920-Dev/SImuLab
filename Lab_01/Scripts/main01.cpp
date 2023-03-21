#include <iostream>
#include <string>


using namespace std;

void validation(int, string);

int main()
{
    string cadena;
    int cont = 0;

    cout << "Ingrese una cadena de caracteres: \n";
    cin >> cadena; 

    validation(cont, cadena);
    
    
    return 0;
}

void validation(int cont, string cadena){
    for(int i = 0; i < cadena.size(); i++){
        
         if((cadena[i] >= 65 && cadena[i]<= 90)){
            cout << cadena[i] << " ";
            cont++;
        }else if((cadena[i] >= 97 && cadena[i] <= 122)){
            cout << cadena[i] << " ";
            cont++;
        } 

    }

    cout << "\n El numero de caracteres alfabeticos es: " << cont;

}
