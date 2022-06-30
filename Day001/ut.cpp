#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;
int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string; 
        int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int di;
    double ddd;

   cin >> di;
   cin >> ddd;
   cin.get();  
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    

    cout << i + di  << "\n";
    cout<< std::fixed <<std::setprecision(1)<< d + ddd << endl;
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << s <<input_string << endl;
  
    // TODO: Write a line of code here that prints the contents of input_string to stdout.

    return 0;
}
