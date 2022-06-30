#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double tipPercent;
    double taxPercent;
    double mealCost;
    double totalCost;
    cin>>mealCost>>tipPercent>>taxPercent;
    tipPercent/=100.;
    taxPercent/=100.;
    totalCost=mealCost+(mealCost*tipPercent)+(mealCost*taxPercent);
    cout<<"The total meal cost is "<<round(totalCost)<<" dollars.";
    return 0;
}
