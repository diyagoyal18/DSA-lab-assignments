/*
Roll Number: 102215299
Name: Ananya Sharma
Description:3.  
•	What is the value of the following postfix expression?
54	 + 7 4 - * 9 / 35 15 + +
•	Use the conversion algorithm to change the following infix expression into postfix using stack. Show each step using a tabular approach.
(A * B - (C - D)) / (E + F)
•	Also write the program to perform this conversion. Also write a program to evaluate the postfix expression.
Acknowledgement: NA
*/
// •	Value of the postfix expression
// 54 6 + --> 60
// 7 4 -  --> 3
// 60 * 3  --> 180
// 9 /     --> 20
// 35 15 + --> 50
// 180 + 50 + --> 230

// •	Conversion from Infix to Postfix:

// Symbol	Stack	Postfix
// (	(	*
// A	( A	*
// *	( A	- *
// B	( A B	- *
// )	( A B	- *
// -	( A B *	-
// (	( A B *	-
// C	( A B * C	-
// -	( A B * C	- -
// D	( A B * C D	- -
// )	( A B * C D -	-
// )	( A B * C D -	-
// /	( A B * C D --	 /
// (	( A B * C D --	 /
// E	( A B * C D -- E	 /
// +	( A B * C D -- E	 /
// F	( A B * C D -- E F	 /+
// )	( A B * C D -- E F +	 /

// Postfix expression is AB*CD--EF+/
/* Acknowledgement: GeeksforGeeks*/
#include <bits/stdc++.h>
using namespace std;

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L';
}

void infixToPostfix(string s) {
    stack<char> st;
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
 
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
 
        else if (c == '(')
            st.push('(');
 
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else {
            while (!st.empty() && prec(s[i]) < prec(st.top()) ||
                   !st.empty() && prec(s[i]) == prec(st.top()) &&
                   associativity(s[i]) == 'L') {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}

int main() {
    string exp = "(A*B-(C-D))/(E+F)";
    infixToPostfix(exp);
 
    return 0;
}

