//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <iostream>
using namespace std; 

int recFib(int x);	//recursive Fibonacci 
int iterFib(int x); //iterative Fibonacci

int main(){
	cout << "Recursive Fibonacci of 40 " << recFib(40) << endl;
	cout << "Iterative Fibonacci of 40 " << iterFib(40) << endl;
}

int recFib(int x){
	if(x == 0){
		return 0;	
	}
	if(x == 1 ){
		return 1; 
	}
	return recFib(x-1) + recFib(x-2); 
}

int iterFib(int x){
	int a = 1, b = 1; 
	for(int i = 3; i <= x; i++){	//starts at the 3rd element because first two is 1 and 1+1
		int tmp = a + b; 
		a = b; 
		b = tmp; 
	}
	return b; 
}
