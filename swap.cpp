//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <stdio.h>
#include <iostream>
using namespace std;

void xorSwap(int* x, int* y){
	if (x == y){	//if two variables are equal then no swap
		return;			
	}
	*x = *x + *y; 
	*y = *x - *y;
	*x = *x - *y; 
}

int main(){
	int x = 10, y = 20; 
	cout << "Before swap x is " << x << " and y is " << y  << endl;
	swap(x, y);
	cout << "After swap x is now " << x << " and y is now " << y << endl;
	return 0;
}
