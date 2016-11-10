//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <iostream> 
#include <string.h>
using namespace std;

bool isPalindrome(string word){
	int i = 0; 
	int i1 = word.length() - 1;
	while(i1 > i){					
		if(word[i] != word[i1]){
			return false;
		}
		++i; 		//Complexity of O(n) because it is only a single linear iteration of i
		--i1; 		//Complexity of O(n) because it is only a single linear iteration i1
	}
	return true; 
}					//Total complexity is 2* O(n), which is still O(n)

int main(){
	string word = "step on no pets";
	if (isPalindrome(word) == true){
		cout << word << " is a palindrome" << endl;
	}else{
		cout << "word is not a palindrome" << endl;
	}
	
}

