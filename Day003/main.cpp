#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int input_int;
  cin >> input_int;
  if ((input_int % 2) ==1){
    cout << "Weird" << endl;
  }
  if ((input_int % 2) == 0 && 1<input_int && 6 > input_int){
    cout << "Not Weird" << endl;
  }
  if ((input_int % 2)==0 && 5 < input_int && 21 > input_int){
    cout << "Weird" << endl;
  }
  if ((input_int % 2) == 0 && input_int > 20){
    cout << "Not Weird" << endl;
  }
  return 0;
}
