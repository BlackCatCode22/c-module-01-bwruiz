// doubleInt.cpp
// 01/18/25
// Module 1

#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number to double";  //Asks user to input any integer to be doubled
  int x{};                             //Hold users input
  cin >> x;                            //x is the users input
  cout << x*2 << endl;                 //Prints to console users input by 2
  return 0;
}