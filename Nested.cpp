#include <iostream>
using namespace std;

int main() {
    int age = 19;
    string str = "japan";

    if(age >= 18) {
        if("india" == str) {
            cout << "vote de sakte hai";
        }
        else {
            cout << "you are not indian";
        }
    }
    else {
        cout << "vote nahi de sakte hai";
    }

    return 0;
}