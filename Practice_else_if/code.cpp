// calculate tax

// #include <iostream>
// using namespace std;

// int main() {
//    int income;
//    float tax;
   
//    cout << "Enter your Income (in lakh) :";
//    cin >> income;

//    if(income < 5){
//      tax = 0;
//    }else if (income <= 10){
//      tax = 0.2 * income;
//    }else{
//      tax = 0.3 * income;
//    }

//    cout << "Tax =" << (tax * 100000) << endl;
//     return 0;
// }

// Print the largest of 3 number

#include <iostream>
using namespace std;

int main(){
     int a, b, c;
     cout << "enter a: ";
     cin >> a;
     cout << "enter b: ";
     cin >> b;
     cout << "enter c: ";
     cin >> c;

     if(a >= b && a >= c){
         cout << "Largest is a  = " << a << endl;
     } else if(b >= c) {
        cout << "Largest is b = " << b << endl;
     }else {
        cout << "Largest is c = " << c << endl;
     }
      
   return 0;
}