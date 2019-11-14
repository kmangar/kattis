#include <iostream>
#include <cstdio>
using namespace std;


class Node  {  
    public:        
    int data;
    Node* next;
};  
void printList( Node *ptr)  {
    while (ptr != NULL){
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n"); 
}  
void add(Node** head_ref, int new_data)  {  
      Node* new_node = new Node;
      new_node->data = new_data;
      new_node->next = (*head_ref);
      (*head_ref) = new_node;  
}
void printMiddle(  Node *head)  {
    Node * fast = head; 
    Node * slow = head; 
    while(fast != NULL && fast-> next != NULL){
        fast = fast -> next -> next; 
        slow = slow -> next;
    }
    cout << "The middle element is ["<< slow->data<<"]"<<endl;
}//printmiddle 

void rotate(Node **head_ref, int k)  {
    Node * temp = *head_ref; 
    Node * temp_k1;  
    Node * last = *head_ref;
    for (int i = 0; i < k ; i++)
    {
        temp = temp -> next;
    }
    while(last->next != NULL){
        temp_k1 = temp_k1 -> next; 
    }
    cout<< temp; 
    cout << temp_k1;
    //temp -> next = NULL; 
    //temp_k1 -> next = *head_ref; 

    //temp_k1 = temp -> next; 
    //temp -> next = NULL; 

    }

int main()  {
    Node* head = NULL;  
    for (int i=11; i>0; i--)  {
        add(&head, i);  
        printList(head);  
    }
    printMiddle(head);
    rotate(&head, 6);  
    cout << "\nRotated Linked list \n";  
    printList(head);

}