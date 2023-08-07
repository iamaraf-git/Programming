  // Function to add a new node at the end of the list 
   void addNode(int value) { 
     Node *newNode = new Node(value); 
     if (head == nullptr) { 
       head = newNode; 
     } else { 
       Node *current = head; 
       while (current->next != nullptr) { 
         current = current->next; 
       } 
       current->next = newNode; 
     } 
   }
