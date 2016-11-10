//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <iostream> 
#include <iomanip>
using namespace std;

long factRecursive(int n); //calculate n! using recursion
long factIterative(int n); //calculate n! using iteration

int main(){
	cout << " n" << "\t" << "find n! using iteration" << setw(6) << " " 
		<< "find n! using recursion" << "\n";
	cout << setfill('-') << setw(60) << "-" << endl;
	for(int i = 0; i  <= 20; i++){
		cout << setfill(' ') << right << setw(2) << i 
			<< setw(29) << factIterative(i) << setw(29) << factRecursive(i) << "\n";
	}
}

long factRecursive(int n){
	if(n <= 1){
		return 1;
	} 
	return n * factRecursive(n - 1);	//uses a recursion
	
}

long factIterative(int n){
      long temp = 1;
      int i;
      for(i = 1; i <= n; i++) {
          temp *= i;	//iteration 
      }
      return temp;
}

/* The recursive method has a time complexity of O(logn) 
** while the iterative method has a time complexity of O(n^2)
*/
