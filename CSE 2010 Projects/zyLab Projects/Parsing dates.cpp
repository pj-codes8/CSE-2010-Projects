#include <iostream>
#include <string>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
	 string str;
    while(true)
    {
      getline(cin,str);

      if (str == "-1") {
         break;
      }
      string s,s1,s2,s3;

      int x = str.find(",");
      if (x == -1 || str[x+1]!=' ') {
         continue;
      }
      s3 = str.substr(x+2,str.length()-1);

      int y = str.find(" ");
      if (y == -1 || y>x) {
         continue;
      }
      s2 = str.substr(y+1, x-y-1);

      s1 = str.substr(0,y);
      if (s1=="January") s="1";
      else if (s1=="February") s="2";
      else if (s1=="March") s="3";
      else if (s1=="April") s="4";
      else if (s1=="May") s="5";
      else if (s1=="June") s="6";
      else if (s1=="July") s="7";
      else if (s1=="August") s="8";
      else if (s1=="September") s="9";
      else if (s1=="October") s="10";
      else if (s1=="November") s="11";
      else if (s1=="December") s="12";
      else continue;

      cout << s << "/" << s2 << "/" << s3 << endl;
   }

}