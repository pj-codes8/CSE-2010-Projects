#include <iostream>
#include <string>
using namespace std;

int main() {

   int count = 0;
   char ch, str[100]; // variable declaration
   
   cin >> ch; // input character
   
   cin.getline(str, 100); // input String
   
   for (int i = 0; str[i] != '\0'; i++) { // loop over string till end '\0' null
   
      if(ch == str[i]) { // check whether character is present in String
         count++; // increment count by 1
      }
   }
   
   if (count == 1) { // check if count 1 singular
      cout << count << " "<< ch;
   }
   
   else { // or plural
      cout << count << " " << ch << "'s";
   }
   cout << endl;
   
   return 0;
}