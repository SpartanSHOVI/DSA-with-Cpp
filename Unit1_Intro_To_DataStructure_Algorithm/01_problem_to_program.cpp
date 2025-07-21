/*

🔰 Topic 1: From Problem to Program
🎯 Concept Overview
Before we write a program, we must understand:
  1. Problem – What needs to be solved? (Input → Desired Output)
  2. Solution – The steps to solve the problem logically.
  3. Algorithm – A well-defined, step-by-step procedure to solve the problem.
  4. Program – A coded version of the algorithm using a programming language like C++.

📌 Example Problem
Problem: Given two numbers, find their sum.

✍️ Algorithm
1. Start
2. Read two numbers (A and B)
3. Add the numbers and store the result in SUM
4. Display SUM
5. End

*/

// Topic: From Problem to Program
// Description: This program reads two numbers and prints their sum.
// It demonstrates how we convert a problem into an algorithm, and finally into code.

#include <iostream>
using namespace std;

int main() {
    int a, b, sum;

    // Input: Read two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Process: Add the numbers
    sum = a + b;

    // Output: Display the result
    cout << "Sum = " << sum << endl;

    return 0;
}

