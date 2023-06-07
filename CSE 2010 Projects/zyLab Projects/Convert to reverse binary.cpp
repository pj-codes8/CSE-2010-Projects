#include <iostream>
using namespace std;

int main() {

   // Declare Variable x
   int x;
   
   // Get User Input x
   cin >> x;
   
   // Looping through to determine the binary conversion while x > 0
   while (x > 0) {
      cout << x % 2;
      x /= 2;
   }
   cout << endl;

   return 0;
}