//Created By Henry Nguyen
//January 27, 2014
//hnnguyen@uga.edu

#include <stdio.h>
#define LEN n

int binarysearch(int len, int a[], int x) {
   int low = 0;
   int high = len - 1;
   while (low <= high) {
      int mid = (low + high) / 2;
      if (a[mid] == x) return mid;
      else if (a[mid] < x) low = mid + 1;
      else high = mid - 1;
   }
   return -1; 	//returns -1 if number does not exist in the array
}

int main() {

   int a[] =
    { 1, 2, 4, 5, 7, 8, 10, 12, 13 };   
    int n = sizeof(a)/sizeof(a[0]);
    int i;
   	for (i = 0; i < n; i++){
      printf("%i ", a[i]); //binarysearch(LEN, a, a[i]));
    } 
   printf("\n");
   printf("%i ", binarysearch(LEN, a, 1)); //returns 0
   printf("%i ", binarysearch(LEN, a, 4)); //returns 2
   printf("%i ", binarysearch(LEN, a, 12)); //returns 7
   printf("%i ", binarysearch(LEN, a, 14)); //returns -1
   printf("\n");
}