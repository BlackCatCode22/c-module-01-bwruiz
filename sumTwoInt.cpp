//
// Created by billw on 1/18/2025.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers to add together";  //Asks user to input any integer to be tripled
    int x{};                                      //Hold users first input
    int y{};                                      //Hold users second input
    cin >> x >> y;                                //x and y is the users inputs
    cout << x+y << endl;                          //Prints to console users inputs added together
    return 0;
}