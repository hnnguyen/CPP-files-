//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <iostream>
using namespace std; 

int recPow(int A, int B); //recursive power
int iterPow(int A, int B); //iterative power

int main(){
	int A = 2, B = 3;
	cout << "Recursive pow(A,B) = " << recPow(A, B) << endl;
	cout << "Iterative pow(A,B) = " << iterPow(A,B) << endl;
}

int recPow(int A, int B){		//The function of recPow can be denoted as t(n) = (-1) * d + c which is an element of O(n)
	if(B < 0){
		return recPow((1/A), B); //for negative powers
	}
	if(B == 0){			//Power of 0 = 1
		return 1; 
	}
	if(B == 1){			//Power of 1 = itself
		return A; 
	}
	return A * recPow(A, B-1); 
}

int iterPow(int A, int B){	//Time complexity is O(n^2) due to one iterative loop
	int i = 1;
	for(int j = 1; j <= B; j++){	
		i *= A;
	}
	return i; 
}
