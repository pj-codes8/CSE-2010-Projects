#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName, middleName, lastName, formattedName, name;
    
    getline(cin, name);

    int index1 = name.find(" ");
    firstName = name.substr(0, index1);
    
    int index2 = name.find(" ", index1 + 1);
    
    if (index2 != string::npos) {
        middleName = name.substr(index1 + 1, index2 - index1 - 1);
        lastName = name.substr(index2 + 1, name.length() - index2 - 1);
        cout << lastName << ", " << firstName[0] << "." << middleName[0] << "." << endl;
    } else {
        lastName = name.substr(index1 + 1, name.length() - index1 - 1);
        cout << lastName << ", " << firstName[0] << "." << endl;
    }

   return 0;
}