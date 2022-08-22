#include <iostream>
using namespace std;

int n1 = 0, n2 = 1, ne = 0; // declare some variables
int Fibonacci(int n) {
   
   // if n is negative, return -1
   if (n<0){
      return -1;
   }
   // else if n is greater than 1
   else if (n>1){
      // calculate next term and set n1 and n2 to next number
      ne = n1 + n2;
      n1 = n2;
      n2 = ne;
      Fibonacci(n-1); // recursively call the function
   }
   return ne; // return the last term  
}

int main() {
   int startNum;
   
   cin >> startNum;  
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;
   
   return 0;
}