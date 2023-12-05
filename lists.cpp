#include <iostream>

using namespace std;

int main(){
    int age = 23;
    age = 24;
    char letter = 'A';
    int ages_list[] = { 10, 20, 30, 34, 35, 36 };
    cout << age << endl;
    cout << letter << endl;
    cout << ages_list[2] << endl;

    //Changing a value in a specific index
    ages_list[2] = 31;

    //other examples for lists
    /*
    float R[10] = {2, 32, 4.6, 2, 1, 0.5, 3, 8, 0, 12};
    float S[] = {2, 32, 4.6, 2, 1, 0.5, 3, 8, 0, 12};
    int N[] = {1, 2, 3, 6};
    char Mensaje[] = "Error de lectura";
    char Saludo[] = {'H', 'o', 'l', 'a', 0};
    */
}