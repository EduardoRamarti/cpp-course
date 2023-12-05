#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Age: ";
    cin >> age;
    if (age >= 18 && (age <= 40 || age == 17)){
        cout << "You can vote" << endl;
    } else if (age == 55 ){
        cout << "You can vote" << endl;
    } else {
        cout << "You are not able to vote" << endl;
    }
}