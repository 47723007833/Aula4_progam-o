//biblioteca 
#include <iostream>
//inicio
int main() {
    int num;
    
        cout << "Digite um numero entre 1 e 10";
        cin >> num; 
        
    }while (num < 1 || num > 10); 
    
    cout << "Voce digitou um numero " << num << ".";
    
    return 0;
}