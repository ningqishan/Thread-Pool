#include<iostream>
using namespace std;
struct list{
    int data;
    list *next;
};
list *head = new list;
void init(){
    head->next = NULL;
}
void Insert(){
    for(int i = 1;i<=12;i++){
        list *newnode = new list;
        if(head->next==NULL){
            head->next = newnode;
            newnode->next = NULL;
            newnode->data = i;
        }else{
            newnode->data = i;
            newnode->next = head->next;
            head->next = newnode;
        }
    }
}
void Delete(int a){
    for(list *p = head;;p = p->next){
        if(p->data==a){
            p->data = p->next->data;
            p->next = p->next->next;
            //p->next->next=NULL;
            break;
        }
    }
}
void Output(){
    for(list *p = head->next;;p = p->next){
        if(p->next==NULL){
            cout<<p->data;
            break;
        }else{
            cout<<p->data<<" ";
        }
    }
}
void use(){
    init();
    Insert();
    Delete(9);
    Output();
}
int main(){
    use();
    return 0;
}