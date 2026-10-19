#include <iostream>
using namespace std;

int main() {
    int number_1 = 40;
    int number_2 = 30;
    int number_3 = 35;
    int number_4 = 49;
    int number_5 = 55;

    if(number_1 > number_2 > number_3 && number_1 > number_5) {
        cout << "number 1 is largest";
    }
    else if(number_2 > number_1 > number_3 && number_2 > number_5) {
        cout << "number 2 is largest";
    }
    else if(number_3 > number_1 > number_2 && number_4 > number_5) {
        cout << "number 3 is largest";

    }
    else if(number_4 > number_2 > number_1 && number_3 > number_5) {
        cout << "number 4 is largest";
    }
    else{
        cout << "number 5 is largest";
    }

    return 0;
}