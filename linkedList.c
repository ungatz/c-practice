#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
void display(struct node* head){
    struct node* temp=head;
    printf("\n\nList elements are - \n");
    while(temp!=NULL){
        printf("%d --->",temp->data);
        temp=temp->next;
    }
}
void insertAtMiddle(struct node* head,int position,int value){
    struct node *temp = head;
    struct node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=value;
    int i;
    for(i=2;inext!=NULL;){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    *headRef=head;
    }
void insertAtFront(struct node** headRef,int value){
    struct node* head=*headRef;
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=head;
    *headRef=head;
}
void insertAtEnd(struct node* head , int value){
    struct  node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    srtuct node *temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void deleteFromFront(struct node** headRef){
    struct node* head = *headRef;
    head = head->next;
    *headRef=head;
}
void deleteFromEnd(struct node* head){
    struct node* temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->
}
void deleteFromMiddle(struct node* head , int position){
    struct node* temp = head;
    int i;
    for(i=2; inext != NULL){
        temp=temp->next;
    }
    temp->next=temp->next->next; //doubt;
}
int main(){
    /* Initializing all the nodes */
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;
    /* Dynamically allocating memory using default func. */
    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));
    /* Assigning data values in nodes */
    one->data=1;
    two->data=2;
    three->data=3;
    /* Connecting Nodes */
    one->next=two;
    two->next=three;
    three->next=NULL;
    /* Save adresse of the node in head */
    head=one;
    display(head);
    
    insertAtFront(&head, 4);
    display(head); // 4 --->1 --->2 --->3 --->     

    deleteFromFront(&head);
    display(head); // 1 --->2 --->3 ---> 
    
    insertAtEnd(head, 5);
    display(head); // 1 --->2 --->3 --->5 --->   
    
    deleteFromEnd(head);
    display(head); // 1 --->2 --->3 --->       

    int position = 3;
    insertAtMiddle(head, position, 10);
    display(head); // 1 --->2 --->10 --->3 --->      
    
    deleteFromMiddle(head, position);
    display(head); // 1 --->2 --->3 --->     
return 0;
}  
}