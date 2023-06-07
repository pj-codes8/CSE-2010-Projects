#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers
   int totalValues;
   int temp;
   
   cin >> totalValues;
   
   for (int i = 0; i < totalValues; i++) {
      cin >> temp;
      userInts.push_back(temp);
   }
   
   for (int j = userInts.size() - 1; j >= 0; j--) {
      cout << userInts.at(j) << ",";
   }
   cout << endl;

   return 0;
}