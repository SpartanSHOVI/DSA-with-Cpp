/*

🔰 Topic 2: Data, Information, Knowledge & ADT
📘 1. What is Data?
  Raw, unprocessed facts.
  Example: 85, "John", 12.5, etc.

📘 2. What is Information?
  Processed data that has meaning.
  Example: John scored 85 marks (meaningful data)

📘 3. What is Knowledge?
  Interpretation and application of information.
  Example: If John consistently scores above 80, he is a good student. (derived insight)

📦 4. Abstract Data Type (ADT)
An ADT is a logical model of a data structure that defines:
  What operations can be performed
  What each operation does
BUT NOT how it is implemented.

🔹 Examples of ADTs:
🔰 Topic 2: Data, Information, Knowledge & ADT
📘 1. What is Data?
Raw, unprocessed facts.

Example: 85, "John", 12.5, etc.

📘 2. What is Information?
Processed data that has meaning.

Example: John scored 85 marks (meaningful data)

📘 3. What is Knowledge?
Interpretation and application of information.

Example: If John consistently scores above 80, he is a good student. (derived insight)

📦 4. Abstract Data Type (ADT)
An ADT is a logical model of a data structure that defines:

What operations can be performed

What each operation does

BUT NOT how it is implemented.

🔹 Examples of ADTs:
| ADT Name | Supported Operations                         |
| -------- | -------------------------------------------- |
| Stack    | Push, Pop, Peek                              |
| Queue    | Enqueue, Dequeue, Peek                       |
| List     | Insert, Delete, Search, Traverse             |
| Tree     | Insert, Delete, Traverse (Inorder, Preorder) |
| Graph    | AddEdge, RemoveEdge, BFS, DFS                |


*/

// Topic: Data vs Information vs Knowledge and ADT
// Description: Demonstrates the difference between data, information, and the concept of ADT using a student marks example.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Data: Raw numbers
    string name = "John";
    int marks = 85;

    // Information: Display meaningful message
    cout << "Information: " << name << " scored " << marks << " marks." << endl;

    // Knowledge: Applying logic to derive insight
    if (marks > 80) {
        cout << "Knowledge: " << name << " is a good student." << endl;
    }

    return 0;
}

