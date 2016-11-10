//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <iostream>
#include <cmath>
using namespace std; 

int recGCD(int A, int B);  //recursive GCD
int iterGCD(int A, int B);   //iterative GCD

int main(){
	int A = 21, B = 35;
	
	cout << "recursive GCD = " << recGCD(A,B) << endl;
	cout << "iterative GCD = " << iterGCD(A,B) << endl;
	return 0;
}

int recGCD(int A, int B){

	A = abs(A); //non-negative integer
	B = abs(B);	//non-negative integer

	if(A > B){
		A = A - B; 
		return recGCD(A, B);
	}else if( A < B){
		B = B - A;
		return recGCD(A, B);
	}else{
		return A; 
	}
}

int iterGCD(int A, int B){
	while(1){
		A = A % B; 
		if(A == 0){
			return B; 
		}
		B = B % A; 
		if(B == 0){
			return A; 
		}
	}
}
