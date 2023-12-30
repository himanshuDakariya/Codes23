// 1. Write a program to implement singly linked list as an ADT that supports the following operations:





#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

Node* head = NULL;
Node* tail = NULL;

class Linkedlist {
public:
    Linkedlist() {}

    // i.   Insert an element x at the beginning of the singly linked list
    void insertathead(int d) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        if (tail == NULL) {
            tail = head; 
        }
    }

    void insertattail(int d) {
        Node* temp = new Node(d);
        if (tail == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    // ii.  Insert an element x at ith position in the singly linked list
    void insertat(int p, int d) {
        if (p <= 1) {
            insertathead(d);
            return;
        }

        Node* temp = head;
        int c = 1;
        while (c < p - 1) {
            temp = temp->next;
            c++;
            if (temp == NULL) {
                cout << "Invalid Position!!!" << endl;
                return;
            }
        }

        Node* newnode = new Node(d);
        newnode->next = temp->next;
        temp->next = newnode;
    }

    


    // iii. Remove an element from the beginning of the singly linked list.
    void delfront(){

        if (head == NULL) {
        cout<<"Empty list!"<<endl;
        return;}

        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        if (head == NULL) {
        tail = NULL;  // Update tail when the list becomes empty
    }
    }


    // iv.  Remove an element from ith position in the singly linked list.

    void delnode(int p) {
        if (p <= 0) {
            cout << "Invalid Position!!!" << endl;
            return;
        }
        if (p == 1) {
            Node* temp = head;
            head = head->next;
            if (tail == temp) {
                tail = head; 
            }
            temp->next = NULL;
            delete temp;
        } else {
            Node* curr = head;
            Node* prev = NULL;
            int c = 1;
            while (c < p) {
                prev = curr;
                curr = curr->next;
                c++;
                if (curr == NULL) {
                    cout << "Invalid Position!!!" << endl;
                    return;
                }
            }
            prev->next = curr->next;
            if (tail == curr) {
                tail = prev; 
            }
            curr->next = NULL;
            delete curr;
        }
    }

// vi.  Search for an element x in the singly linked list and return its pointer
    Node* search(int x){
        Node* res= nullptr;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==x){
                res= temp;
            }
            temp=temp->next;
        }
        

        if(res!=nullptr){
            cout<<"Element found at address: "<<res<<endl;
            
        }
        else{
            cout<<"Element not found!"<<endl;
        }

        return res;
    }


    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
   
    Linkedlist list;
    list.insertathead(10);
    list.insertattail(20);
    list.insertattail(30);
    list.insertattail(40);

    list.insertat(5, 50);
    list.print();
    list.delfront();
    list.print();
    list.delnode(4);
    list.print();

    list.search(30);



    return 0;
}






























// #include <iostream>

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int d) : data(d), next(nullptr) {}
// };

// class SinglyLinkedList {
// private:
//     Node* head;

// public:
//     SinglyLinkedList() : head(nullptr) {}

//     // i. Insert an element x at the beginning of the singly linked list
//     void insertAtBeginning(int x) {
//         Node* newNode = new Node(x);
//         newNode->next = head;
//         head = newNode;
//     }

//     // ii. Insert an element x at ith position in the singly linked list
//     void insertAt(int position, int x) {
//         if (position <= 0) {
//             std::cout << "Invalid Position!!!" << std::endl;
//             return;
//         }

//         if (position == 1 || head == nullptr) {
//             insertAtBeginning(x);
//             return;
//         }

//         Node* temp = head;
//         for (int i = 1; i < position - 1 && temp->next != nullptr; ++i) {
//             temp = temp->next;
//         }

//         Node* newNode = new Node(x);
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     // iii. Remove an element from the beginning of the singly linked list
//     void removeFromBeginning() {
//         if (head == nullptr) {
//             std::cout << "Empty list!" << std::endl;
//             return;
//         }

//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }

//     // iv. Remove an element from ith position in the singly linked list
//     void removeFrom(int position) {
//         if (position <= 0) {
//             std::cout << "Invalid Position!!!" << std::endl;
//             return;
//         }

//         if (position == 1 || head == nullptr) {
//             removeFromBeginning();
//             return;
//         }

//         Node* temp = head;
//         Node* prev = nullptr;
//         for (int i = 1; i < position && temp != nullptr; ++i) {
//             prev = temp;
//             temp = temp->next;
//         }

//         if (temp == nullptr) {
//             std::cout << "Invalid Position!!!" << std::endl;
//             return;
//         }

//         prev->next = temp->next;
//         delete temp;
//     }

//     // vi. Search for an element x in the singly linked list and return its pointer
//     Node* search(int x) {
//         Node* temp = head;
//         while (temp != nullptr) {
//             if (temp->data == x) {
//                 return temp;
//             }
//             temp = temp->next;
//         }
//         return nullptr; // Element not found
//     }

//     // Function to print the linked list
//     void print() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             std::cout << temp->data << " ";
//             temp = temp->next;
//         }
//         std::cout << std::endl;
//     }
// };

// int main() {
//     SinglyLinkedList list;

//     list.insertAtBeginning(10);
//     list.insertAtBeginning(20);
//     list.insertAtBeginning(30);
//     list.insertAtBeginning(40);
//     list.insertAt(1, 50);
//     list.print(); // Output: 20 30 10

//     list.removeFrom(1);
//     list.print(); 
//     list.removeFromBeginning();
//     list.print();

  

//     return 0;
// }
