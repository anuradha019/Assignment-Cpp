#include <iostream>
using namespace std;

int main() {
// int x = 2, y = 5;
// int exp1 = (x * y / x); // ans 5 sequence wise solve
// int exp2 = (x * (y / x)); // ans 4 first bracket solve 
// cout << exp1 << ",";
// cout << exp2 << "\n";

// int x = 10, y = 5;
// int exp1 = (y * (x / y + x / y)); // 20 first bracket solve
// int exp2 = (y * x / y + y * x / y); // 20 sequence wise
// cout << exp1 << " ";
// cout << exp2 << "\n";

int x = 200, y = 50, z = 100; 
if(x > y && y > z){
cout << "Hello \n";
}
if(z > y && z < x){ 
cout << "C++ \n";
}
if((y+200) < x && (y+150) < z){ 
cout << "Hello C++ \n";
}
return 0;
}