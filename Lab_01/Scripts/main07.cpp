#include <iostream>

using namespace std;

void isPalindrome(int);
int invert(int);

int main(){
    int n;

    cout << "Escriba un numero entero: \n";
    cin >> n;

    isPalindrome(n);

    return 0;
}

void isPalindrome(int n){
    int num;

    num = invert(n);

    if (num == n)
    {
        cout << "Si es palindrome\n";
    }else{
        cout << "No es palindrome\n";
    }
    
}

int invert(int n){
    int newN, result = 0;
    while (n > 0)
    {
        result = result * 10 + (n%10);
        n = n/10;
    }
    
    return result;
}
