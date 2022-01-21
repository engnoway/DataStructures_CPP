#include <iostream>

using namespace std;
const int MAX_SIZE = 50;
template <class t> 

class _stack{
    private:
     int top;
    t arr[MAX_SIZE]={0};
    public:
    _stack():top(-1){};
    bool IsFULL(){
     if(top>=MAX_SIZE-1)
      { cout<<"full stack"<<endl;
        return false;
      }
    else
         return true;
    }
     bool IsEMpty(){
     if(top<0)
      { cout<<"empty stack"<<endl;
        return false;
      }
    else
         return true;
    }
    void push(t val){
        if(IsFULL())
        arr[++top]=val;
    }
    t pop(){
        if(IsEMpty())
        return arr[top--];
    }
    
    void print(){
        for(int i=top;i>=0;i--)
        cout<<arr[i]<<endl;
    }
};
