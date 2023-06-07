#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int input;
   double sum = 0.0;
   
   cin >> input;
   
   int count = 0;
   
   int max = 0;
   
   while (input >= 0) {
      sum = sum + input;
      cin >> input;
      count = count + 1;
    if (input >= max) {
     max = input;
    }
   }
   
   
   cout << max << " ";
   
   cout << fixed << setprecision(2) << (sum / count) << endl;

   return 0;
}