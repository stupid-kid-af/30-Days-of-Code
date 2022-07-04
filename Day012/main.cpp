// defining the constructor within the class
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student {
    string firstName;
    string lastName;
    int idNo;
    int noOfScores;
    int x;
    int sum = 0;
    int avg = 0;

public:
    student()
    {
        cin >> firstName >> lastName >> idNo;
        cin >> noOfScores;

        int mark[noOfScores];
        for (int i=0; i<noOfScores; i++){
            cin >> mark[i];
//             cout << mark[i] << " " << endl;
        }

        for (const double &n : mark) {
//    cout << n << "  ";
//  calculate the sum
    sum += n;
    avg = sum/noOfScores;
    // count the no. of array elements
//    ++count;

  }

  // print the sum
//  cout << "\nTheir Sum = " << avg << endl;


//        cout << "\nTheir Sum = " << sum << endl;
//        cout << mark[0:];

//        vector<int> v(noOfScores);
//    for (auto &it : v) {
//        cin >> it;
//    }
//while ((cin >> x) && x != 9999)
//    ints.push_back(x);

//        while(std::cin>>x) ints.push_back(x);
//        std::cin.clear();
//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//        for (auto it = noOfScores.begin(); it != noOfScores.end(); it++)
//        cout << *it << " ";

    }

    void display()
    {
        cout << "Name: " << lastName << ", " << firstName << "\n"<< "ID: " << idNo << endl;
        if (avg <= 100){
            if(avg >= 90 ){
                cout << "Grade: O";
            }
        }
        if (avg < 90){
            if(avg >= 80){
                cout << "Grade: E";
            }
        }if (avg < 80){
            if(avg >= 70){
                cout << "Grade: A";
            }
        }if (avg < 70 ){
            if(avg >= 55){
                cout << "Grade: P";
            }
        }if (avg < 55){
            if(avg >= 40){
                cout << "Grade: D";
            }
        }if (avg < 40) {
            cout << "Grade: T";
        }
//        cout << "First Name : " << firstName << "\n" << "Last Name : " << lastName << endl;
//        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
};

int main()
{
    student s; // constructor gets called automatically when
            // we create the object of the class
    s.display();

    return 0;
}
