#include <cstring>
#include <iostream>
#include <cctype>
#include<iomanip>
#include <stdlib.h>     /* atoi */

using namespace std;



/* 3.1
SUP che prende una stringa del tipo "923D" ed estrae il numero, convertendolo in int. La lettera D è
sempre alla ne della stringa. Vericare il funzionamento anche con numeri negativi. Esistono diversi
modi per fare questa conversione, ma probabilmente la soluzione più semplice è usare il metodo nativo
C++, che è la prima soluzione proposta dal sito. */

const int MAXLENGHT= 100;

int main()
{
    
    char string[MAXLENGHT]; 
    cin >> string;
    int asgora= atoi(string) ;
    

    cout << asgora ;
  return 0;
}