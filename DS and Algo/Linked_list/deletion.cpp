#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void InsertBeg(Node** head, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

// delete a no. in LL
// void DeleteNode(Node** head, int key)
// {
//     Node* temp = *head;
//     Node* prev = NULL;

//     // if head node has the key(number) to be deleted
//     if (temp != NULL && temp->data == key){
//         *head = temp->next;
//         delete temp;
//         return;
//     }
//     else{
//         while (temp != NULL && temp->data != key)
//         {
//             prev = temp;
//             temp = temp->next;
//         }
//         if (temp == NULL)
//             return;
//         prev->next = temp->next;
//         delete temp;
//     }

// }

// Delete a no at given position
void DeleteNode(Node** head, int pos)
{
    if (*head==NULL){
        return;
    }
    Node* temp = *head;
    if (pos == 0){
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i=0; temp != NULL && i<pos-1; i++){
        temp = temp->next;
    }

    if (temp==NULL || temp->next == NULL)
        return;
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void PrintList(Node* n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node* head = NULL;
    InsertBeg(&head, 7);
    InsertBeg(&head, 1);
    InsertBeg(&head, 3);
    InsertBeg(&head, 2);

    cout << "Created linked list is: " <<endl;
    PrintList(head);
    DeleteNode(&head, 2);
    cout << endl;
    cout << "Linked List after Deletion of 1: " << endl;
    PrintList(head);
    return 0;
}