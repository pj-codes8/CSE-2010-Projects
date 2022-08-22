#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {

   // declaring variables
    string lines;

    char fileName[50], tempFile[] = "tempFile.txt";

    // reading filename from user
    cin >> fileName;

    // opening user's file for reading
    ifstream file(fileName);

    // opening temp file for writing
    ofstream file1(tempFile);

    // cout << "\n";

    // Reading lines by line from user's file
    while(getline (file, lines)) {

        // split the name by "_"
        // get only the prefix of name
        string name = lines.substr(0, lines.find("_"));

        // concat the suffix with name's prefix
        name = name + "_info.txt";

        // write the resultant name into tempFile
        file1 << name << endl;

        // print the modified name
        cout << name << endl;

    }

    // Removing the user's fil
    remove(fileName);

    // renaming the temp file as user's file
    rename(tempFile, fileName);

    // Closing the tempFile
    file1.close();

   return 0;
}