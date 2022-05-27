#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    int size ;
    int *p ;
    /*
     Member function
     Member function
     Member fucntion

    */
};// stack using an array:_)
void create(Stack &obj , int size){
    obj.size = size ;
    obj.p = new int[size];
    obj.top = -1;
     
}
void display(Stack &obj ){
   for(int i = obj.top ; i>=0 ; i--)cout<<obj.p[i]<<" ";cout<<endl;
}
void push( Stack *ptr, int x){
    if(ptr->top>=ptr->size-1){
        cout<<"Stack is Full"<<endl;
    }
    else {
        (ptr->top)+=1;
        ptr->p[ptr->top] = x;

    }
}
int pop( Stack &ptr){
   
   int x = -1  ;
    if(ptr.top==(-1)){
        cout<<"Nothing to pop out :_("<<endl;
        return x ;
    }
    else {
        ptr.top--;
         x= ptr.p[ptr.top];
        return x ;
    }
}
void    isFull(Stack *ptr){if(ptr->size == ptr->top+1){
cout<<"true"<<endl;
    }
    else {
        cout<<"false"<<endl;
        
    }
}
void    isEmpty(Stack *ptr){if(ptr->top==-1){
cout<<"true"<<endl;
    }
    else {
        cout<<"false"<<endl;
        
    }
}
int main(){
Stack obj1;
create(obj1,4);
push(&obj1 , 40);push(&obj1 , 41);push(&obj1 , 402);push(&obj1 , 404);isFull(&obj1);
display(obj1);
pop(obj1);
display(obj1);
cout<<obj1.size<<endl;
isFull(&obj1);
pop(obj1);pop(obj1);  isEmpty(&obj1);
pop(obj1); isEmpty(&obj1);
}