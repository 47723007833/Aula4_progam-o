// biblooteca
#include <iostream>
using namespace std;

//inicio
int main() {
    //veriaveis 
    char op;
    float num1, num2;
    cout << "ENTRE COM O OPERADOR: +,-,*, /   ";
    cin >> op;
    cout << "ENTRE COM DOIS VAOLRES: ";
    cin >> num1 >>num2;
    
    //comandos
    switch(op) {
       case '+':
       cout << num1 << "+" << num2 << " = " << num1 + num2;
       break;
       case '-':
       cout << num1 << "-" << num2 << " = " << num1 - num2;       
       case '*':
       cout << num1 << "*" << num2 << " = " << num1 * num2;
       break;       
       case '/':
       cout << num1 << "/" << num2 << " = " << num1 / num2;
       break;
       default:
       cout << "OPERADOR ERRADO, POR FAVOR INCIRA O OPERADOR COREETO";
       break;
       
    }

//finalização 
    return 0;
}