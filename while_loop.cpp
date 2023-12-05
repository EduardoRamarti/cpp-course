#include <iostream>

using namespace std;

int main() {
    while(true){
        char answer = 'o';
        cout << "Do you wanna end?: ";
        cin >> answer;
        if (answer == 'y'){
            cout << "bye bye" << endl;
            break;
        }
    }

    do {
        char answer = 'o';
        cout << "Do you wanna end?: ";
        cin >> answer;
        if (answer == 'y'){
            cout << "bye bye" << endl;
            break;
        }
    } while (true);
}