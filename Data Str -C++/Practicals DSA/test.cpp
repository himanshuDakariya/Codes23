// 4. Implement Stack as an ADT and use it to evaluate a prefix/postfix expression.


#include<iostream>
#include<cmath>

using namespace std;

class Stack{
public:
    int* arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top =-1;

    }

    void push(int e){
        if(size-top>1){
            top++;
            arr[top]=e;
        }
        else{
            cout<<"StackOverflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"StackUnderflow"<<endl;
        }

    }
    int topp(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }



    void postfixeval(string exp,Stack s){
    
    
    int res;
    for(char x:exp){
        if((x-'0')==0||(x-'0')==1||(x-'0')==2||(x-'0')==3||
           (x-'0')==4||(x-'0')==5||(x-'0')==6||(x-'0')==7||
           (x-'0')==8||(x-'0')==9){
            s.push(x-'0');

        }
        else{
            if(x=='+'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=b+a;
                s.push(res);
            }
            else if(x=='-'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=b-a;
                s.push(res);
            }
            else if(x=='*'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=b*a;
                s.push(res);
            }
            else if(x=='/'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=b/a;
                s.push(res);
            }
            else if(x=='^'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=pow(b,a);
                s.push(res);
            }
            
        }
    }
    cout<<s.topp();

}
    void prefixeval(string exp,Stack s){
    
    
    int res;
    for(char x:exp){
        if((x-'0')==0||(x-'0')==1||(x-'0')==2||(x-'0')==3||
           (x-'0')==4||(x-'0')==5||(x-'0')==6||(x-'0')==7||
           (x-'0')==8||(x-'0')==9){
            s.push(x-'0');

        }
        else{
            if(x=='+'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=a+b;
                s.push(res);
            }
            else if(x=='-'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=a-b;
                s.push(res);
            }
            else if(x=='*'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=a*b;
                s.push(res);
            }
            else if(x=='/'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=a/b;
                s.push(res);
            }
            else if(x=='^'){
                int a=s.topp();
                s.pop();
                int b=s.topp();
                s.pop();
                res=pow(a,b);
                s.push(res);
}}}cout<<s.topp();}

};
int main (){
Stack s(100);
Stack s2(100);
string postfixexp="231*+9-";
s.postfixeval(postfixexp,s);
string prefixexp="-+5/*6234";
s.prefixeval(prefixexp,s2);

return 0;}