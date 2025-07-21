/*

🔰 Topic 3: Abstract Data Types (ADT) and Data Structure Classification

🧱 What is a Data Structure?
A data structure is a method of organizing and storing data so that it can be accessed and modified efficiently.

📦 Abstract Data Type (Recap)
An ADT defines:
  What operations can be performed (not how)
  Acts as an interface
For example: Stack ADT supports push(), pop(), peek() — how it's implemented (array or linked list) is hidden.

🧭 Classification of Data Structures
Data Structures can be broadly classified as:
                   Data Structures
                         |
    -----------------------------------------
    |                                       |
Linear DS                          Non-Linear DS
    |                                       |
Array, Linked List,              Tree, Graph, Heap
Stack, Queue

📌 Explanation:
🔹 Linear Data Structures
  Elements are arranged sequentially.
  Memory is contiguous (Array) or linked (Linked List).
  Examples:
    1. Array
    2. Linked List
    3. Stack
    4. Queue

🔹 Non-Linear Data Structures
  Elements are arranged in a hierarchical or connected fashion.
  Examples:
    1. Tree
    2. Graph
    3. Heap
*/

// Topic: ADT and Classification of Data Structures
// Description: Demonstrates examples of different data structures and their classification.

#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    // Linear Data Structures
    cout << "Linear Data Structures:\n";

    // Array (Static)
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "- Array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;

    // Stack
    stack<int> s;
    s.push(1); s.push(2); s.push(3);
    cout << "- Stack top element: " << s.top() << endl;

    // Queue
    queue<int> q;
    q.push(10); q.push(20);
    cout << "- Queue front element: " << q.front() << endl;

    // Linked List (using STL list)
    list<int> l = {1, 2, 3};
    cout << "- Linked List: ";
    for (int val : l) cout << val << " ";
    cout << endl;

    // Non-Linear Data Structures
    cout << "\nNon-Linear Data Structures:\n";

    // Tree and Graph would need custom implementation,
    // Here we show usage of map to simulate tree structure

    map<int, string> tree; // Simulating tree node storage
    tree[1] = "Root";
    tree[2] = "Left Child";
    tree[3] = "Right Child";
    cout << "- Tree Nodes: ";
    for (auto node : tree) {
        cout << "[" << node.first << ": " << node.second << "] ";
    }
    cout << endl;

    return 0;
}
