#include <iostream>
using namespace std;

void SwapValues(int& val1, int& val2, int& val3, int& val4) {
   int temp1 = val1;
   val1 = val2;
   val2 = temp1;
   
   int temp2 = val3;
   val3 = val4;
   val4 = temp2;
   
}

int main() {
   int userVal1;
   int userVal2;
   int userVal3;
   int userVal4;
   
   cin >> userVal1 >> userVal2 >> userVal3 >> userVal4;
   
   SwapValues(userVal1, userVal2, userVal3, userVal4);
   
   cout << userVal1 << " " << userVal2 << " " << userVal3 << " " << userVal4 << endl;

   return 0;
}