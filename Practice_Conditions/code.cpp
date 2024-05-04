// Print largest of 2 number
// #include <iostream>
// using namespace std;

// int main () {
//     int a;
//     int b;

//     cout << "Enter first number :" << endl;
//     cin >> a;
//     cout << "Enter Second number : " << endl;
//     cin >> b;

//     if(a > b) {
//         cout << "a is the largest number" << endl;
//     }else {
//         cout << "b is the largest number" << endl;
//     }

//     return 0;
// }

// Print if a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter any number : " << endl;
    cin >> a;

    if(a % 2 == 0) {
        cout << "It is an even Number" << endl;
    }else {
        cout << "It is an Odd Number" << endl;
    }

    return 0;
}