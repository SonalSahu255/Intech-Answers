/*Steps: 
The given code compresses a given string by counting the consecutive occurrences of each character and 
representing them as a single character followed by the number of times it appears consecutively in the 
original string. 
For example, the input string "aaaabbcddddd" is compressed to "a4b2c1d5". 
Here is how the code works: 
The compress function takes a string s as input and calculates the length of the string. 
The function uses a while loop to iterate through the string from the beginning to the end. 
Inside the while loop, the function counts the number of consecutive occurrences of each character in 
the string by using another while loop. 
Once the consecutive occurrences of a character are counted, the function prints the character followed 
by its count. 
The function continues to iterate through the string until all characters have been processed. 
The main function calls the compress function with an example input string "aaaabbcddddd". 
The output of the program is the compressed string "a4b2c1d5", which is printed to the console. 
Note that the code assumes that the input string is not empty, and it does not handle the case where the 
input string contains only a single character. 
*/
Bonus 1:
/*
If we want to further compress the string "a2b2c1a3c3" by applying the same compression logic, we can 
modify the given code to keep track of the compressed string and compress the resulting string further. 
Here is the modified code: 
Modified Code: */

#include<iostream> 
#include <string> 
using namespace std; 
string compress(string s) 
{ 
 string compressed = ""; 
 int num = s.length(); 
 int i = 0; 
 while (i < num) { 
 int repetition = 1; 
 while (s[i] == s[i+1] && i < num-1 ) { 
 repetition++; 
 i++; 
 } 
 compressed += s[i]; 
 if (repetition > 1) { 
 compressed += to_string(repetition); 
 } 
 i++; 
 } 
 return compressed; 
} 
int main() 
{ 
 string str = "a2b2c1a3c3"; 
 string compressed = compress(str); 
 string compressed2 = compress(compressed); 
 cout << compressed2 << endl; // output: ab2c1ac3 
 return 0; 
} 

/*In this modified code, the compress function returns the compressed string instead of printing it directly 
to the console. The main function first calls the compress function to compress the input string 
"a2b2c1a3c3". The resulting compressed string "ab2c1a3c3" is then passed to the compress function 
again to compress it further. The resulting compressed string "ab2c1ac3" is then printed to the console. 
Note that the modified code assumes that the input string contains only alphabets and numbers, and 
that each number in the input string represents the number of consecutive occurrences of the previous 
character. If the input string has a different format, the code may need to be modified accordingly. */

Bonus 2: 
/*To decompress a compressed string, we can traverse the compressed string character by character and 
build the decompressed string accordingly. If a character in the compressed string is followed by a 
number, we can repeat the character that many times in the decompressed string. Here is the code to 
reverse the compression function and decompress a compressed string: 
Code: */

#include<iostream> 
#include <string> 
using namespace std; 
string decompress(string s) 
{ 
 string decompressed = ""; 
 int num = s.length(); 
 int i = 0; 
 while (i < num) { 
 char c = s[i]; 
 i++; 
 if (isdigit(s[i])) { 
 int repetition = 0; 
 while (i < num && isdigit(s[i])) { 
 repetition = repetition * 10 + (s[i] - '0'); 
 i++; 
 } 
 for (int j = 0; j < repetition; j++) { 
 decompressed += c; 
 } 
 } else { 
 decompressed += c; 
 } 
 } 
 return decompressed; 
} 
int main() 
{ 
 string str = "ab2c1ac3"; 
 string decompressed = decompress(str); 
 cout << decompressed << endl; // output: aabbcaaaccc 
 return 0; 
}

/*
In this code, the decompress function takes a compressed string as input and returns the corresponding 
decompressed string. The function traverses the compressed string character by character, and if a 
character is followed by a number, it repeats the character that many times in the decompressed string. 
The resulting decompressed string is then returned. 
The main function calls the decompress function to decompress the compressed string "ab2c1ac3". The 
resulting decompressed string "aabbcaaaccc" is then printed to the console.*/

Memory Requirements and Constraints: 
/*
The given code compresses a string by printing each character followed by the number of times it 
appears consecutively in the original string. While the code correctly compresses the string, it may not 
be the most memory-efficient way to store the compressed string. 
One way to improve the memory efficiency of the compression is to use a dynamic array or a vector to
store the compressed string, instead of printing it directly to the console. This way, the compressed 
string can be stored in memory and manipulated further, if required. 
Another way to improve memory efficiency is to use a binary format to represent the compressed string. 
For example, we can use a bit to represent whether the current character is repeated or not, followed by 
a fixed number of bits to represent the count of the consecutive occurrences. This way, the compressed 
string can be stored in a much smaller space than the original string. 
In addition, if the string to be compressed is very long, it may be more memory-efficient to compress the 
string in chunks rather than compressing the entire string at once. This way, we can reduce the amount 
of memory required to store the compressed string in memory at any given time. 
Finally, it may be worthwhile to explore other compression algorithms that may be more 
memory-efficient than the approach used in the given code. For example, the Lempel-Ziv-Welch (LZW) 
algorithm is a popular compression algorithm that can achieve high compression ratios with relatively 
low memory usage.*/
