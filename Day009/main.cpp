#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int factorial(int);



int main() {

    int a;
    cin >> a;
    cout << factorial(a) << endl;

}
int factorial(int n){
    // Base Case
    if (n<=1)
    {
        return 1;
    }
    else
    {
       return n * factorial(n-1);


    }

}
