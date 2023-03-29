#include <iostream>

using namespace std;

void findString(string, string);

int main()
{

    string cad1, cad2;
    cout << "Ingrese  cadena a buscar: \n";
    getline(cin,cad1);
    cout << "Ingrese cadena, donde se buscara: \n";
    getline(cin,cad2);
    findString(cad1, cad2);

    return 0;
}

void findString(string cad1, string cad2)
{
    int cont = 0;

    int T1 = cad1.size(), T2 = cad2.size();

    for (int i = 0; i < T1; i++)
    {
        for (int j = 0; j < T2; j++)
        {

            if (cad1[i] == cad2[j])
            {
                i++;
                cont++;
            }
        }
    }

    if (cont == T1 )
    {
       cout << "La cadena si se encuentra" << "\n"; 
    }else{
        cout << "la cadena NO se encuentra \n";
    }
    
}
