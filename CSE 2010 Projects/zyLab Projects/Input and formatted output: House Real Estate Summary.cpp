#include <iostream>
using namespace std;

int main() {
   int currentPrice;
   int lastMonthsPrice;
   int summaryPrice;
   double estMonthlyMortgage;
   
   cin >> currentPrice;
   cin >> lastMonthsPrice;
   
   summaryPrice = currentPrice - lastMonthsPrice;

   estMonthlyMortgage = (currentPrice * 0.051) / 12;
   
   cout << "This house is $" << currentPrice << ". The change is $" << summaryPrice << " since last month." << endl;
   cout << "The estimated monthly mortgage is $" << estMonthlyMortgage << "."<< endl;

   return 0;
}