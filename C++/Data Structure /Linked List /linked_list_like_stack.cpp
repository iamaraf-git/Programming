//Linked list : Display output opposite input order

#include <iostream>

using namespace std;

// Node class for the linked list
class Node
{
public :
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Linked list class
class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Function to add a new node at the beginning of the list
    void addNode(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to display the linked list
    void displayList()
    {
        Node* current = head;

        while (current != nullptr)
            {
                cout << current->data << " ";
                current = current->next;
            }
        cout << endl;
    }
};

int main()
{
    LinkedList myList;

    // Add nodes to the linked list
    myList.addNode(5);
    myList.addNode(10);
    myList.addNode(15);

    // Display the linked list
    cout << "Linked List: ";
    myList.displayList();

    return 0;
}
