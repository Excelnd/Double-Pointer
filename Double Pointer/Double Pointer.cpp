// Double Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
		int varc = 433310;
		int *ptr2;
		int **ptr1;

		ptr2 = &varc;
		ptr1 = &ptr2;

		cout << varc << endl;
		cout << "single Pointer value is " << *ptr2 << endl;
		cout << "double Pointer value is " << **ptr1 << endl;

    return 0;
}

