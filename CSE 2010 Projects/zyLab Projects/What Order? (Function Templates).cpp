#include <string>
#include <iostream>

using namespace std;

template<class T>
int CheckOrder(T t1, T t2, T t3, T t4)
{
//ascending order
if ((t1<t2) && (t2<t3) && (t3<t4) )
{
return -1;

}
//descending order.
else if ((t1 > t2) && (t2 > t3) && (t3 > t4))
{
return 1;

}
//unordere
else
return 0;
}

int main() {
   // Read in four strings
   string stringArg1, stringArg2, stringArg3, stringArg4;
   cin >> stringArg1;
   cin >> stringArg2;
   cin >> stringArg3;
   cin >> stringArg4;
   // Check order of four strings
   cout << "Order: " << CheckOrder(stringArg1, stringArg2, stringArg3, stringArg4) << endl;

   // Read in four doubles
   double doubleArg1, doubleArg2, doubleArg3, doubleArg4;
   cin >> doubleArg1;
   cin >> doubleArg2;
   cin >> doubleArg3;
   cin >> doubleArg4;
   // Check order of four doubles
   cout << "Order: " << CheckOrder(doubleArg1, doubleArg2, doubleArg3, doubleArg4) << endl;
   
   return 0;
}