// this program reverses a given name through a simple for loop with no change to the actual name

#include <iostream>
using namespace std;

main(){
    const int arraySize = 10;
    char name [arraySize];
    cout << "Plz enter your name to see in reverse order: ";
    cin >> name;
    cout << "You entered the name: " << name << "\n";

    int nullIndex;
    for (int i=0; i<arraySize; i++){
        if (name[i] == '\0'){
            nullIndex = i;
            break;
        }
    }

    cout << "The name reversed is: ";
    for (int i=nullIndex-1; i>=0; i--){
        cout << name[i];
    }

    // the name remains the same in memory since we did not do any assignment operations in the above steps
    cout << "\nThe name at program end: " << name << "\n";

}