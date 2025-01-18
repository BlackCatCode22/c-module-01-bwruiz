//
// Created by billw on 1/18/2025.
//

#include <iostream>
using namespace std;

int main() {
    cout << "What is your name?";       //Asks the user for their name
    string name;                        //Stores the users name
    cin >> name;                        //
    cout << "Hello! " << name << endl;  //Prints Hello! 'name'
    return 0;
}