// string reverser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int length;
	getline(cin, input);
	length = input.size();
	for (int i = length; i > 0; i--) {
		cout << input[i - 1];
	}
	char none;
	cin >> none;
    return 0;
}

