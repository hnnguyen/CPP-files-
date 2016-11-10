//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <iostream> 
#include <cmath>
using namespace std;

int recGetDigits(int number, int digits); 	//recursive method to get digits
int iterGetDigits(int number, int digits);	//iterative method to get digits

int main(){
	int number = 123;
	int digits = 0; //digits is a counter that will increase depending on the size of the number

	cout << "recursive digits " << recGetDigits(number, digits) << endl;
	cout << "iterative digits " << iterGetDigits(number, digits) << endl;
}
int recGetDigits(int number, int digits){
	if(number == 0){
		return digits;
	}
	return recGetDigits(number /10, ++digits);
}

int iterGetDigits(int number, int digits){

	number = abs(number);

	if(number == 0){
		return digits; 
	}
	for(digits = 0; number > 0; digits++){
		number = number / 10; 					//divides the number by 10 until it can no longer. Then digits will represent the number of digits in a number
	}
	return digits; 
}
