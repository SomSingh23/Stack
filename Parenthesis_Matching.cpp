// using stack
#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int size ;
    char *p;
    int top ;
};
void SetUP(Stack *pq , string b){

pq->size = b.length();
pq->top = -1 ;
pq->p = &b[0];

}
void push( Stack *ptr, char x){
    if(ptr->top>=ptr->size-1){
        cout<<"Stack is Full"<<endl;
    }
    else {
        (ptr->top)+=1;
        ptr->p[ptr->top] = x;

    }
}
bool pop( Stack &ptr){
   
   char x = 'F'  ;
    if(ptr.top==(-1)){
        cout<<"Nothing to pop out :_("<<endl;
        return false ;
    }
    else {
        ptr.top--;
         x= ptr.p[ptr.top];
        return true ;
    }
}
void    isFull(Stack *ptr){if(ptr->size == ptr->top+1){
cout<<"true"<<endl;
    }
    else {
        cout<<"false"<<endl;
        
    }
}
bool   isEmpty(Stack *ptr){ if(ptr->top==(-1))
        return true ;
        else   return false ;
    
      
}
void check(Stack *tr){bool k ;
    for(int i = 0 ;i<tr->size ; i++){
        if(*(((tr->p) +i))=='('){push(tr , '(');}
        else if (*(((tr->p )+i))==')'){ k = pop(*tr); if(k==false){cout<<"parenthesis are not matching"<<endl;  break ;}}
    }
   if(isEmpty(tr)==true and k!=false)cout<<"matching parenthesis"<<endl;
   else if(k!=false) cout<<"No parenthesis matching"<<endl;
}
int main(){
     ios_base::sync_with_stdio(false); // this will run your code fast :__)
    cin.tie(nullptr);                     // this will run your code fast :__)
    string a = "(a*b+c*d)";
 Stack objectone ;
  SetUP(&objectone , a);
  check(&objectone);
       return 0 ;
}