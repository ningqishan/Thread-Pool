#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

Node *Head = new Node;
void init(){
    Head->next = NULL;
}
void Insert(int a){
    Node *NewNode = new Node;
    if(NewNode->next==NULL){
        NewNode->next= NULL;
        Head->next = NewNode;
        NewNode->data = a;
    }else{
        NewNode->next = Head->next;
        Head->next = NewNode;
        NewNode->data = a;
    }
}
void more_insert(){
    for(int i  =1;i<=5;i++){
        Insert(i);
    }
}
void Output(){
    for(Node *p = Head->next;;p = p->next){
        if(p->next==NULL){
            cout<<p->data;
        }else{
            cout<<p->data<<" ";
        }
    }
}

void return_delete(int k){
    int ans =0 ;
    for(Node *p = Head->next;;p = p->next){
        ++ans;
        if(p->next==NULL)
            break;
    }
    int cnt = ans-k;
    int index = 0;
    for(Node *p = Head->next;;p = p->next){
        ++index;
        if(index==cnt){
            Head = p->next;
            p->next = NULL;
            for(Node *p = Head->next;;p = p->next){
                if(p->next==NULL){
                    cout<<p->data;
                    break;
                }else{
                    cout<<p->data<<" ";
                }
            }
        }
    }
}
void Use(){
    init();
    more_insert();
    Output();

    return_delete(3);
}
int main(){
    Use();
    return 0;
}