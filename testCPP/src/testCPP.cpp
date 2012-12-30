//============================================================================
// Name        : testCPP.cpp
// Author      : Robert
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Encoder.h"
using namespace std;

Encoder rEncoder;

int main() {
	cout << "!!!Hello World!!!" << endl;
	int b = 0;

	while(true){
	cout << "Put a value:"<< endl;
	cin >> b;
	rEncoder.write(b);
	cout << "Speed: " << rEncoder.speed << endl;

	char q;
	cout << "The End?" << endl;
	cin >> q;
	if(q=='y' || q=='Y') break;
	}

	return 0;
}
