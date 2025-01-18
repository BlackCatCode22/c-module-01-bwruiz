//
// Created by billw on 1/18/2025.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number to triple it";  //Asks user to input any integer to be tripled
    int x{};                                //Hold users input
    cin >> x;                               //x is the users input
    cout << x*3 << endl;                    //Prints to console users input by 3
    return 0;
}