// MD_Arrays.cpp : Defines the entry point for the console application.
//

#include "multiply_me.h"
#include <iostream>
#include "stdafx.h"

using namespace std;

int main()
{
	char any;

	cout << "Welcome to my multiplication table program!";
	cout << "\nHere is a multiplication table: " << endl << endl;
	multiply_me();
	cin >> any;

    return 0;
}

