#include <iostream>
using namespace std;

class my_stack {
    int stk[100], top, max_size;

public:

my_stack(){top = -1; max_size = sizeof(stk)/sizeof(stk[0]);}

bool Empty_Check(){
    if(top == -1){return true;}
    else{return false;}
}

bool Full_Check(){
    if(top == max_size - 1){return true;}
    else{return false;}
}

void push(int value){
    if(Full_Check()){cout<<"Stack is Full"<<endl;}
    else{
        top++;
        stk[top] = value;
        cout<<"Added the element "<<value<<endl;}
}

void reader(){
    if(Empty_Check()){cout<<"The Stack is empty"<<endl;}
    else{
        cout<<"The stack is displayed as: \t";
        for(int a = 0; a <= top; a++){cout<<stk[a]<<"\t";}
        cout<<endl;
    }
}

void top_element(){
    if(Empty_Check()){cout<<"The Stack is empty"<<endl;}
    else{cout<<"The top element is: "<<stk[top]<<"\n";}
}

void pop(){
    if(Empty_Check()){cout<<"Stack is Empty!"<<endl;}
    else{
        cout<<"Last element popped"<<endl;
        top--;
    }
}
};

int main(){
    my_stack stk_1;
    stk_1.push(2);
    stk_1.push(5);
    stk_1.push(7);
    stk_1.reader();
    stk_1.top_element();
    stk_1.pop();
    stk_1.reader();
    stk_1.push(11);
    stk_1.reader();
    stk_1.pop();
    stk_1.push(9);
    stk_1.reader();
    return 0;
}
