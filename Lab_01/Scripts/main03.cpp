/* #include <iostream>

using namespace std;

void findString(string, string);

int main() {

    string cad1,  cad2;
    cout << "Ingrese dos cadenas de caracteres: \n";
    cin >> cad1; cout << "\n";
    cin >> cad2;

    findString(cad1, cad2);

    return 0;
}


void findString(string cad1, string cad2){
    int T1 = cad1.size(), T2 = cad2.size();

    string cadN1[T1 + 1], cadN2[T2 + 1], cadResult;

    cadN1[0] = " ";
    cadN2[0] = " ";
    
    for (int i = 1; i < T1; i++)
    {
        cadN1[i] = cad1[i - 1];
    }

    for (int i = 1; i < T2; i++)
    {
        cadN2[i] = cad2[i - 1];
    }
    
    if(T1 > T2){
        cout << "La primera cadena es demasiado grande \n";
    }else{
        for (int i = 1; i < T1; i++)
        {
            for (int j = 1; j < T2; j++)
            {
                if((cadN1[i] == cadN2[j])){
                    cadResult += cadN2[j];
                    i++;
                    j++;
                }else{
                    cadResult = " ";
                    j++;
                }
            }
            
        }
        
    }

    if (cad1 == cadResult)
    {
        cout << cadResult << " Si esta contenida";
    }
    
} */