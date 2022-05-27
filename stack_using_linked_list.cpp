#include <bits/stdc++.h>
using namespace std;
// implementation of stack using linked list
class node{
   public:
   int data;
   node *next ;
};

    node *top = nullptr ;

void push( int x){
    node *p = new node ;
    if(p==nullptr)cout<<"No dynamic memory left"<<endl;
    else {
       p->next = top ;
       top = p;
       top->data = x;
       
    }
}
int pop(){
    node *p =top;
    if(p==nullptr){cout<<"pop karne ke liye elements hi nai hai :_("<<endl;return -1 ;}
    else { int x = top->data ;
       top=top->next ;

       p->next= nullptr;
       delete p ;
       return x ;
    }
}
void display(node *ptr){
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;
}
int main(){
for(int i = 0 ;i<4 ; i++)push(i*10);
display(top);
pop();pop();display(top);
pop();pop();display(top);pop();
return 0 ;}