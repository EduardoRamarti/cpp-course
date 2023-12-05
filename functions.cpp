#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a + b;
}

int quads(int a, int b = 2){
    return a * b;
}

int main(){
    cout << add(2 , 2) << endl;
    cout << multiply(2 , 2) << endl;
    cout << quads(2) << endl;
}