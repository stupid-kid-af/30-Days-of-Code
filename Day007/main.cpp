#include <iostream>
#include <algorithm>
using namespace std;

// Utility function to reverse elements of an array
void reverse(int arr[], int n) {
    reverse(arr, arr + n);
}

int main(int argc, char *argv[]) {
  int ipn=0;
  cin >> ipn;
  int numbers[ipn];

 // cout << "Enter the numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < ipn; ++i) {
    cin >> numbers[i];
  }
      int n = sizeof(numbers)/sizeof(numbers[0]);

    reverse(numbers, n);
  //cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < ipn; ++n) {
    cout << numbers[n] << " ";
  }

  return 0;
}
