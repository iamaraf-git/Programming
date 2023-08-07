
#include <iostream>

using namespace std;

// Node class for the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    // Create nodes

    Node* head = new Node(5);
    Node* second = new Node(10);
    Node* third = new Node(15);

    // Link (connect) nodes
    head->next = second;
    second->next = third;

    // Traverse the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Clean up memory
    delete head;
    delete second;
    delete third;

    return 0;
}

