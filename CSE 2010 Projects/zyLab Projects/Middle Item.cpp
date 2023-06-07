#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
    const int NUM_ELEMENTS = 9;
    int userValues[NUM_ELEMENTS];
    int num, count = 0;
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        } else if (count == NUM_ELEMENTS) {
            cout << "Too many numbers" << endl;
            return 0;
        }
        userValues[count++] = num;
    }
    cout << "Middle item: " << userValues[count / 2] << endl;

   return 0;
}