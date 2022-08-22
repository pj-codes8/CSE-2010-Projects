#include <iostream>
#include <vector>
using namespace std;

int main() {

   int n, threshold;
   cin >> n;
   
   int numbers[n];
   for (int i = 0; i < n; i++) {
      cin >> numbers[i];
   }
   
   cin >> threshold;
   
   for (int i = 0; i < n; i++) {
      if (numbers[i] <= threshold) {
         cout << numbers[i] << ",";
      }
   }
   cout << endl;

   return 0;
}