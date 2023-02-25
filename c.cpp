C) Main Code: 
/*
Yes, we can add a min function to a stack that returns the minimum value in the stack, and it can execute 
in O(1) time. 
To do this, we can maintain a separate stack that keeps track of the minimum values seen so far. 
Whenever a new element is pushed onto the stack, we check if it is smaller than or equal to the current 
minimum. If it is, we push it onto the min stack. When an element is popped from the stack, we check if 
it is equal to the current minimum. If it is, we also pop the top element from the min stack. 
Here's an implementation in C++: */

#include <stack> 
class MinStack { 
public: 
 /** initialize your data structure here. */ 
 MinStack() { 
 
 } 
 
 void push(int x) { 
 s.push(x); 
 if (min_s.empty() || x <= min_s.top()) { 
 min_s.push(x); 
 } 
 } 
 
 void pop() { 
 if (s.top() == min_s.top()) { 
 min_s.pop(); 
 } 
 s.pop(); 
 } 
 
 int top() { 
 return s.top(); 
 } 
 
 int getMin() { 
 return min_s.top(); 
 } 
private: 
 std::stack<int> s; 
 std::stack<int> min_s; 
};

/*
In this implementation, the push, pop, and top functions are the same as in a regular stack. The getMin 
function returns the minimum value in the stack, and it executes in O(1) time because the minimum 
value is always stored at the top of the min_s stack. */

Bonus 1: 

/*
A stack is a useful data structure in a wide range of real-world use cases where the Last In First Out (LIFO) 
ordering is required. Here are some examples where a stack can be more useful than an array: 
Function call stack: When a function is called, its local variables and other data are pushed onto the 
function call stack, and when the function returns, the data is popped off the stack. This stack is used to 
manage the sequence of function calls in many programming languages. 
Browser history: When a user visits a website, the website is added to the browser history stack, and 
when the user clicks the "back" button, the most recent website is popped off the stack and displayed. 
Expression evaluation: In many programming languages, expressions are evaluated using a stack-based 
algorithm. The operators and operands are pushed onto the stack in the order they appear in the 
expression, and the operators are popped off the stack and applied to the operands according to their 
precedence. 
Undo-redo functionality: Many applications, such as text editors and graphic design tools, provide 
undo-redo functionality by maintaining a stack of previous states of the document or design. When the 
user performs an undo or redo operation, the top state is popped off the stack and applied to the 
document or design. 
In these use cases, a stack is a better data structure than an array because it provides constant-time 
insertion and removal of elements at the top of the stack, which is not possible with an array. An array 
would require shifting all the elements to maintain the order, which can be inefficient for large datasets. 
Additionally, a stack is a more natural choice for LIFO ordering and is often easier to understand and 
implement in these use cases. */
