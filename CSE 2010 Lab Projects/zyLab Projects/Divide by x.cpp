#include <iostream>
using namespace std;

int main() {

   int userNum;
   int x;
   int totalNum1;
   int totalNum2;
   int totalNum3;
   
   cin >> userNum >> x;
   
   totalNum1 = userNum / x;
   totalNum2 = userNum / x / x;
   totalNum3 = userNum / x / x / x;
   
   
   cout << totalNum1 << " " << totalNum2 << " " << totalNum3 << endl;
   
   

   return 0;
}