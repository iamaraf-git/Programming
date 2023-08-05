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

// Linked list class
class LinkedList {

public:

    Node* head;

    LinkedList() {

        head = nullptr;
    }

    // Function to add a new node at the end of the list
    void addNode(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the linked list
    void displayList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Destructor to clean up memory
     ~LinkedList()
    {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList myList;

    // Add five nodes to the linked list with user input
    int data;
    cout << "Enter five integers:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> data;
        myList.addNode(data);
    }

    // Display the linked list
    cout << "Linked List: ";
    myList.displayList();

    return 0;
}
