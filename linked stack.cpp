#include <iostream>

using namespace std;

class stack{
   private:
   struct Node{
      int element;
      Node* Next;
   };
   Node* top,*current;
  
   
   public:
    stack(){
       top=current=NULL;
   }
   void push(int val){
       Node*newElement=new Node;
       if(newElement==NULL){
           cout<<"failed to allocate memory"<<endl;
       }else{
       newElement->element=val;
       newElement->Next=top;
       top=newElement;}
   }
   
   void pop(){
       if(top==NULL){
                    cout<<"empty _stack"<<endl;
  
       }else{
       Node*temp=top;
       top=top->Next;
      temp= temp->Next=NULL;
       delete temp;
       //return top;
       }
       
   }
   
   void GetTop(int&topElement){
       if(top==NULL){
                    cout<<"empty _stack"<<endl;
  
       }else{
           topElement=top->element;
       }
   }
   
   void Display(){
       current=top;
       while(current!=NULL){
           cout<<current->element<<endl;
           current=current->Next;
       }
   }
};
int main()
{
 
    stack st;
    int x=0;
    st.push (5);
    st.push (4);
    st.push (3);
    st.pop();
    st.push(7);
  st.Display();
  st.GetTop(x);
  cout<<"the element on the top is  "<<x<<endl;

    return 0;
}
