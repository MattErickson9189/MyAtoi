// MyAtoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int myatoi(string str);

int main()
{

	cout << "Enter a number" << endl;
	string x;
	cin >> x;

	int ans = myatoi(x);
	cout << "The number is " << ans << endl;
    return 0;
}

int myatoi(string str) {
	
	vector<int> convert;
	int i = 0;
	int pos = 1;
	int result = 0;

	if (!isdigit(str[0]) && str[0] != '-') {
		//if the string starts with a letter that is not -
		return -1;
	}
	if (str[0] == '-') {
		i++;
		pos = -1;
	}
	while (i < str.length() && isdigit(str[i])) {

		if (isdigit(str[i])) {
			convert.push_back(str[i] - '0');
		}//end of if
		i++;
	}//end of while

	for (int j = 0; j < convert.size(); j++) {
		result = 10 * result + convert.at(j);	
	}
	 
	//convert to negative if it is
	result *= pos;

	return result;

}//end of myatoi
