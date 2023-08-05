    // Function to add a new node at the beginning of the list 
     void addNode(int value) 
     { 
         Node* newNode = new Node(value); 
         newNode->next = head; 
         head = newNode; 
     }
