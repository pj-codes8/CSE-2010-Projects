#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
if(nameList.empty()) {
    	int i;
        for (i = 0;i < permList.size(); i++){
        	if (i == permList.size()-1){
        		cout << permList[i] << endl;
			}
			else {
				cout << permList[i] << ", ";
			}
		}
        return;
    }
    for (int i = 0; i < nameList.size(); i++) {
        vector<string> perm = permList;
        perm.push_back(nameList[i]);
        vector<string> names = nameList;
        names.erase(names.begin() + i);
        PrintAllPermutations(perm, names);
    }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

    while(cin >> name) {
        if (name == "-1") {
            break;
        }
        nameList.push_back(name);
    }
    // Calling recursive function
    PrintAllPermutations(permList, nameList);
   
   return 0;
}