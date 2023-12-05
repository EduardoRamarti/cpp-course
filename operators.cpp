#include <iostream>

using namespace std;

int main(){
    const int a = 2;
    const int b = 3;
    int c = a + 1;
    c += 1;
    const int numbers[] = {24, 40, 7};

    const int add = a + b;
    const int sub = b - a;
    const float div = b / a;
    const int mult = a * b;
    const bool comp = a < b;
    
    cout << add << endl; 
    cout << sub << endl; 
    cout << div << endl; 
    cout << mult << endl; 
    cout << comp << endl; 

    cout << sizeof(c) << endl;
    cout << "There are " << sizeof(numbers)/sizeof(numbers[0])<< " elements in list" << endl;
}