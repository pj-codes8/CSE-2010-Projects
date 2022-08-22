#include <iostream>
using namespace std;

int main() {
   
   int numPennies;
   int numDimes;
   int numNickels;
   int numQuarters;
   int numDollars;
   int amount;
   
   cin >> amount;
   
   if (amount <= 0) 
   {
      cout << "No change" << endl;
   }
   else {
      numDollars = amount / 100;
      amount %= 100;
      numQuarters = amount / 25;
      amount %= 25;
      numDimes = amount / 10;
      amount %= 10;
      numNickels = amount / 5;
      numPennies = amount % 5; 
   }
   
   if (numDollars >= 1)
   {
      if (numDollars == 1) {
         cout << numDollars << " Dollar" << endl;
      }
      else {
         cout << numDollars << " Dollars" << endl;
      }
   }
   
   if (numQuarters >= 1)
   {
      if (numQuarters == 1) {
         cout << numQuarters << " Quarter" << endl;
      }
      else {
         cout << numQuarters << " Quarters" << endl;
      }
   }
   
   if (numDimes >= 1)
   {
      if (numDimes == 1) {
         cout << numDimes << " Dime" << endl;
      }
      else {
         cout << numDimes << " Dimes" << endl;
      }
   }
   
   if (numNickels >= 1)
   {
      if (numNickels == 1) {
         cout << numNickels << " Nickel" << endl;
      }
      else {
         cout << numNickels << " Nickels" << endl;
      }
   }
   
   if (numPennies >= 1)
   {
      if (numPennies == 1) {
         cout << numPennies << " Penny" << endl;
      }
      else {
         cout << numPennies << " Pennies" << endl;
      }
   }

   return 0;
}