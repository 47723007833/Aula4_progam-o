//biblioteca
#include <iostream>
#include <stdlib.h>
using namespace std;
//inicio
int main () { 
    //variaveis?
    double nota1, nota2, nota3, nota4;
    // Nsei
    cout << "Digite a sua primeira nota do semestre >>>";
    //add valor
    cin >> nota1;
    // Nsei
    cout << "Digite a sua segunda nota do semestre >>>";
    //add valor
    cin >> nota2;
    // Nsei
    cout << "Digite a sua terceira nota do semestre >>>";
    //add valor
    cin >> nota3;
    // Nsei
    cout << "Digite a sua primeira nota do semestre >>>";
    //add valor
    cin >> nota4;
    //operção
    double soma = ( nota1, nota2, nota3, nota4 );
    //
    soma = (soma / 4);
    // resultado 1
   cout << "a sua medida do semetres foi : " << soma << endl << endl;
   //
   if(soma >= 7){
       //
       cout << "Parabens você foi aprovado !" << endl;
   }else{
       //
       cout << "Eita você foi reprovado !" << endl;
    //comclusão 
   }
    return 0;
    }