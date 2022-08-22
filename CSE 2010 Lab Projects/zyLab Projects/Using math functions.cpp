#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;
   double power1;
   double power2;
   double absVal;
   double sqRoot;
   
   cin >> x >> y >> z;
   
   power1 = pow(x, z);
   power2 = pow(x, pow(y, z));
   absVal = fabs(y);
   sqRoot = sqrt(pow(x*y, z));
   
   cout << power1 << " " << power2 << " " << absVal << " " << sqRoot << endl;
   

   return 0;
}