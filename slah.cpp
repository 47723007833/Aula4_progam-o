//biblioteca 
#include <iostream>
//inicio
int main() {
    int num;
    //
        cout << " Digite um numero inteiro positivo: ";
        cin >> num; 
//
    cout << " Os primeiros " << num << "os numeros pares sao: ";
    for (int i = 2; i <= num * 2; i += 2) {
        cout << i << " ";
    }
    
    return 0;
}