#include <iostream.h>
using namespace std;
 

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
 

Node* deleteLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;
 
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
 
    
    Node* sec_last = head;
    while (sec_last->next->next != NULL)
        sec_last = sec_last->next;
 
    
    delete (sec_last->next);
 
    
    sec_last->next = NULL;
 
    return head;
}
 



int main()
{
    
    Node* head = NULL;
 
    
    push(&head, 32);
    push(&head, 25);
    push(&head, 63);
    push(&head, 11);
    push(&head, 9);
 
    head = deleteLastNode(head);
    for (Node* temp = head; temp != NULL; temp = temp->next)
        cout << temp->data << " ";
 
    return 0;
}