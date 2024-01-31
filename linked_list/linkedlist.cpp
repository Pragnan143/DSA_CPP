#include<iostream>

using namespace std;

// A Single linked list node 
class node { 
public: 
	int data; 
	node* next; 
    node (int val){
      data=val;
    next=NULL;
    }
    
};
//Insert at Head
void insertAtHead(node* &head,int val){
    node* new_node= new node(val);
    new_node->next=head;
    head = new_node;
}
//Insert at Tail
void insertAtTail(node* &head,int val){
    node* new_node= new node(val); 
    if(head==NULL){
        head=new_node;
    return;
    }     
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
//Insert of Nth Position
void insertAtnthPosition(node* &head,int val,int key){
    if(key==1){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    int start=1;
    //traversing upto before position of wanted
    while(start < key-1){
        temp=temp->next;
        start++;
    }
    
    //creating a new node
    node* new_node = new node(val);

    new_node->next=temp->next;

    temp->next=new_node;
}
//Length of LinkedList
// int leng(node* head){
//     int i=1;
//     while(head->next != NULL){
//         head = head->next;
//         i+=1;
//     }
//     return i;
// }
//Delete LinkedList
void deleteAtHeadNode(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deletionAtPosition(node* &head,int key){
    int start=1;
    if(head == NULL ){
        cout<<"INVALID SITUATION"<< endl;
    }
    node* temp = head;

    while(start < key-1){
        temp = temp->next;
        start++;
    }
    
    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
   
}

node* reverse(node* &head){
    node* prevptr = NULL ;
    node* curr = head;
    node* next;
    while (curr != NULL)
    {
        next=curr->next;
        curr->next=prevptr;
        prevptr=curr;
        curr=next;

     }

    return prevptr;
}
//Display LinkedList
void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    // node* new_node= new node(5);
    // node* new_node= new node(6);
    // node* new_node= new node(7);
    
    //Inserting at Tail
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    //Inserting at Head
    insertAtHead(head,0);
    display(head);

    //Inserting at NthPosition
    insertAtnthPosition(head,4,1);
    display(head);
 
    //Deletion of element from position
    deletionAtPosition(head,3);
    display(head);


   node* newhead = reverse(head);
    display(newhead);

}