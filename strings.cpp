#include <iostream>
#include <string>

using namespace std;

//It's necessary to use library strings for handeling strings

int main()
{
    string texto = "Hola mundo!";
    cout << texto.size() << endl; /* getting the size of string */

    string textonum = "10";
    cout << stoi(textonum) << endl; /* now, we convert a valid string number to integer number */

    string textoflo = "10.5";
    cout << stof(textoflo) << endl; /* now, we convert a valid string float numebr to float number*/

}