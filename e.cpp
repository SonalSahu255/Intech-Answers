e) Main Code: 
// Recursive C++ program for 
// coin change problem. 
#include <bits/stdc++.h> 
using namespace std; 
// Returns the count of ways we can 
// sum coins[0...n-1] coins to get sum "sum" 
int count(int coins[], int n, int sum) 
{ 
 // If sum is 0 then there is 1 solution 
 // (do not include any coin) 
 if (sum == 0) 
 return 1; 
 // If sum is less than 0 then no 
 // solution exists 
 if (sum < 0) 
 return 0; 
 // If there are no coins and sum 
 // is greater than 0, then no 
 // solution exist 
 if (n <= 0) 
 return 0; 
 // count is sum of solutions (i) 
 // including coins[n-1] (ii) excluding coins[n-1]
 return count(coins, n - 1, sum) 
 + count(coins, n, sum - coins[n - 1]); 
} 
// Driver code 
int main() 
{ 
 int i, j; 
 int coins[] = { 1, 2, 3 }; 
 int n = sizeof(coins) / sizeof(coins[0]); 
 int sum = 4; 
 cout << " " << count(coins, n, sum); 
 return 0; 
}

Greedy Algorithm uses: 
/*
A greedy algorithm is an approach to problem-solving that makes the locally optimal choice at each step 
in the hope of finding a global optimum. In other words, at each step, the greedy algorithm selects the 
best possible choice available without regard for future choices. While a greedy algorithm can 
sometimes find an optimal solution, it is not always guaranteed to do so. 
In the case of the coin change problem, a greedy algorithm would involve selecting the largest coin 
denomination that is less than or equal to the remaining amount owed at each step. However, this 
approach does not always lead to an optimal solution. 
Dynamic programming is a technique for solving problems by breaking them down into smaller 
subproblems and solving each subproblem only once. The solutions to these subproblems are then 
combined to solve the larger problem. Dynamic programming can be used to solve the coin change 
problem by using a table to store the minimum number of coins required to make each sum from 0 to 
the desired sum. The table is built up iteratively by considering each coin denomination and computing 
the minimum number of coins required to make each sum up to the desired sum. 
The advantage of dynamic programming over a greedy algorithm is that it can guarantee an optimal 
solution, whereas a greedy algorithm may not always find the best solution. */

Bonus 1: 
/*
To remove one digit and get the largest possible number, the greedy approach is to remove the smallest 
digit. This is because the smallest digit in a number contributes the least to the overall value of the 
number. So, removing it has the least impact on the overall value of the number. 
The steps to remove the smallest digit and print the largest possible number are as follows: 
Convert the number to a string so that it can be easily manipulated. 
Iterate over the digits of the number from left to right, keeping track of the smallest digit seen so far. 
When a smaller digit is found, remove it and stop iterating. If no smaller digit is found, remove the last 
digit. 
Print the resulting string as the largest possible number. 
Here's an example implementation of the above approach: 
*/
#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 
 int n = 123456; 
 string s = to_string(n); 
 int len = s.length(); 
 int min_digit = s[0]; 
 int min_index = 0; 
 for (int i = 1; i < len; i++) { 
 if (s[i] < min_digit) { 
 min_digit = s[i]; 
 min_index = i; 
 } 
 } 
 s.erase(min_index, 1); 
 cout << s << endl; 
 return 0; 
} 
/*
In this example, we start with the number 123456. We convert it to a string and iterate over its digits to 
find the smallest digit, which is 1. We remove the 1 and print the resulting string 23456 as the largest */
possible number. 
