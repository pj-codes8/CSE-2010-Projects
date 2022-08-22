#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip() {
   int decisionMade = rand() % 2;
   string decision;
   
   if (decisionMade == 0) {
      decision = "Tails";
   }
   else {
      decision = "Heads";
   }
   
   return decision;
}

int main() {
   int numberOfDecisions;
   cin >> numberOfDecisions;
   
   srand(2);  // Unique seed

   for (int i = 0; i < numberOfDecisions; i++) {
      cout << CoinFlip() << endl;
   }

   return 0;
}