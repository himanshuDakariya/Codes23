// 4. Implement Stack as an ADT and use it to evaluate a prefix/postfix expression.


#include<iostream>
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
        if(top>0){
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
};

int main (){

    Stack s(100);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    cout<<s.topp()<<endl;
    s.pop();
    cout<<s.topp()<<endl;
    
return 0;

}