#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* 
   Calories = ( (Age x 0.2757) + (Weight x 0.03295) + (Heart Rate x 1.0781) — 75.4991 )  
   x Time / 8.368 
   */
   
   int age;
   int weight;
   int heartRate;
   int minTime;
   double calories;
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> minTime;
   
   calories = ((age * 0.2757) + (weight * 0.03295) + ((heartRate * 1.0781) - 75.4991)) * minTime / 8.368;
   
   cout << "Calories: " << fixed << setprecision(2) << calories << " calories" << endl;

   return 0;
}