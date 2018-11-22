#include<stdio.h>
#include<stdlib.h>
//creating basic node for DLL.
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
void deleteNode(struct node **headRef , struct node *del){
    //base case.
    if(*headRef==NULL || del==NULL)
    return;
    //if node to be deleted is a head node.
    if(*headRef==del)
        *headRef=del->next;
    //if the node to be deleted is not the last node.
    if(del->next==NULL)
        del->next->prev=del->prev;
    //if the node to be deleted is not the first node.
    if(del->prev!=NULL)
        del->prev->next=del->next;
    free(del);
    return;
}
void push(struct node** headRef , int newData){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->prev=NULL; //inserting from head.
    newNode->next=(*headRef);
    if((*headRef)!=NULL)
        (*headRef)->prev=newNode; //change the prev head node to new node.
    (*headRef)=newNode;
}
void printList(struct node *node){
    while(node!=NULL){
        printf("%d",node->data);
        node=node->next;
    }
}
int main(){
    struct node* head = NULL;
    push(&head,2);
    push(&head,4);
    push(&head,8);
    push(&head,10);
    printf("\n Orignal Linked List ");
    printList(head);
    deleteNode(&head,head);
    deleteNode(&head,head->next);
    deleteNode(&head,head->next);
    printf("\n Modified LL ");
    printList(head);
    getchar();
}