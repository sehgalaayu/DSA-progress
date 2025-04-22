#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
        Node(int val){
            data = val; //initialising
            next = NULL;
        }

        ~Node(){
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head=NULL; //initialising
            tail=NULL;
        }

        ~List(){
            if(head != NULL){ //deleting head node and then assigning it NULL value
                delete head;
                head = NULL;
            }
        }

    void push_front(int val){
        Node* newNode = new Node(val); //dyanamic memory allocation because we have to access this node in our Linked List or in our main function also , so it can't be limited to the class only 

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head; //or newNode.next (as newNode is object of Node class so )
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
           tail->next = newNode;
           tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL\n";

    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0;i<pos-1;i++ ){
            if(temp==NULL){
                cout<<"Position INVALID\n";
                return;
            }
            temp = temp->next;
        }
        //temp is now at pos-1 i.e, prev/left
        newNode->next = temp->next;
        temp->next = newNode; 
    }

    void pop_front(){
        if(head == NULL){
            cout<<"List is empty\n";
            return;
        }

        Node* temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
         Node* temp = head;
         while(temp->next->next != NULL){
            temp= temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;

    }

    int searchItr(int key) {
        Node* temp = head;
        int idx = 0;
        
        while (temp != NULL) { // Loop until the end of the list
            if (temp->data == key) {
                return idx; 
            }
            temp = temp->next; 
            idx++;
        }
        
        return -1; 
    }
    int helper(Node* temp, int key) {
        if (temp == NULL) {
            return -1; // Base case: key not found
        }
    
        if (temp->data == key) {
            return 0; // Base case: key found at this node
        }
    
        int idx = helper(temp->next, key); // Recursive call
    
        if (idx == -1) { // Check if key was found in the rest of the list
            return -1;
        }
    
        return idx + 1; // Add 1 to index from recursive call
    }
    
    int searchRec(int key) {
        return helper(head, key);
    }

    int getSize(){
        int sz = 0;
        Node* temp = head;

        while(temp != NULL){
            temp= temp->next;
            sz++;
        }
        return sz;
    }

    void removeNth(int n){ //T.C = O(N);S.C = O(1)
        int size = getSize();
        Node *prev = head;

        for(int i=1; i<(size-n); i++){
            prev = prev->next;
        }
        Node* toDel = prev->next;
        cout<<"Going to delete "<<toDel->data<<endl;

        prev->next = prev->next->next;
        
    }
    
};

int main()
{
 List ll;

 ll.push_front(5);
 ll.push_front(4);
 ll.push_front(3);
 ll.push_front(2);
 ll.push_front(1);

 ll.printList();//1->2->3->NULL
 
 ll.removeNth(2);
 ll.printList();

 return 0;
}