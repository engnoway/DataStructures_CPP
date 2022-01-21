#include <iostream>

using namespace std;
#include <stack>
bool isPaired(char left,char right){
    if(left=='{' && right =='}')
    return true;
    else if(left=='(' && right ==')')
    return true;
    else if(left=='[' && right ==']')
    return true;
    else 
    return false;
}
bool isBalanced(string Expres){
    stack<char> s;
    for(int i=0;i<Expres.length();i++){
        if(Expres[i]=='(' ||Expres[i]=='{' || Expres[i]=='['  ){
            s.push(Expres[i]);
        }
        else if (Expres[i]==')' ||Expres[i]=='}' || Expres[i]==']'  ){
            if(s.empty() || !isPaired(s.top(),Expres[i])){
                
                return false;
                
            }
                
                 else{
            s.pop();
                 }
        }
       
    }
    return s.empty();
}
int main()
{
    string expression;
    cout<<"Enter your expression"<<endl;
    cin>>expression;
if(isBalanced(expression)){
     cout<<"Balanced"<<endl;
     
}
else{
  
    cout<<"UN Balanced"<<endl;
}
    return 0;
}
