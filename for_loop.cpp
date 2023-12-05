#include <iostream>

using namespace std;

int main(){
    int limit;
    int list[] = {100, 200, 300};
    // cout << "Which are the limit?: ";
    // cin >> limit;
    limit = sizeof(list)/sizeof(list[0]);
    for (int i=0; i < limit; i += 1) {
        int validation = list[i]*2;
        cout << validation << endl;
        if (validation == 400){
            break;
        }
    }
    cout << "\nExercise" << endl;
    for (int i = 0; i<=100; i+=1){
        if (i%2 == 0){
            cout << i << endl;
        }
    }
}