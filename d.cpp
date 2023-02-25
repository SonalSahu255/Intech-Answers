d)Main Code:

#include <iostream> 
using namespace std; 
int maxWater(int arr[], int n) { 
 int leftMax = 0, rightMax = 0; 
 int left = 0, right = n-1;
 int res = 0; 
 while (left < right) { 
 if (arr[left] < arr[right]) { 
 if (arr[left] > leftMax) { 
 leftMax = arr[left]; 
 } else { 
 res += leftMax - arr[left]; 
 } 
 left++; 
 } else { 
 if (arr[right] > rightMax) { 
 rightMax = arr[right]; 
 } else { 
 res += rightMax - arr[right]; 
 } 
 right--; 
 } 
 } 
 return res; 
} 
int main() { 
 int arr[] = { 2,1,3,0,1,2,3 }; 
 int n = sizeof(arr) / sizeof(arr[0]); 
 cout << maxWater(arr, n); 
 return 0; 
} 

Bonus 1: 
/*
If the heights of the bars are represented by a continuous function, then the amount of water trapped 
between the bars cannot be determined exactly without knowing the specific functional form of the 
height function. 
However, in general, the amount of water trapped can be approximated by discretizing the function into 
a set of discrete heights and then using the method described in the previous answer to calculate the 
trapped water. 
The accuracy of the approximation will depend on the number of discrete heights used to approximate 
the continuous function. As the number of discrete heights increases, the approximation will become 
more accurate. 
Alternatively, if the functional form of the height function is known, then it may be possible to 
analytically compute the amount of water trapped by solving the relevant integrals.*/
