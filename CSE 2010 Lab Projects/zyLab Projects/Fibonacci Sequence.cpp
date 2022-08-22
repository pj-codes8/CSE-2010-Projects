#include <iostream>
using namespace std;

int Fibonacci(int n) {
   
   /* Any negative index values should return -1 */
    if (n < 0){
        return -1;
    }
    // if value of n is 0 or 1 (base case) than return that value of n
   if (n <= 1) {
      return n;
   }
   // else calculate finonacci series and return
   else {
      return Fibonacci(n-1) + Fibonacci(n-2);
   }
}    

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}