//============================================================================
// Name        : 4_vector_prove_contiguous.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

struct ms{
	int v1;
};

int main() {
	vector<ms> mv;
	
	ms var1;
	for (int i=0;i<4;i++){
		var1.v1=i;
		mv.push_back(var1);
	}
	
	//set breakpoint at return
	//in expressions view
	//sizeof(ms)  => returns 4
	//&mv[0] => gets address of 1st element in vector 
	//&mv[1] => 4 away from 0 
	//&mv[2] => 4 away from 1
	return 0;
}
