#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;
   
   double base1, base2;
   double height1, height2;
   
   cin >> base1; 
   cin >> height1;

   triangle1.SetBase(base1);
   triangle1.SetHeight(height1);
     
   cin >> base2;
   cin >> height2;
   
   triangle2.SetBase(base2);
   triangle2.SetHeight(height2);

   cout << "Triangle with smaller area:" << endl;
   
   if (triangle1.GetArea() < triangle2.GetArea()) {
      triangle1.PrintInfo();
    }
   else {
      triangle2.PrintInfo();
    }
   
   return 0;
}