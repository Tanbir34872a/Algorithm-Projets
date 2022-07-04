#include <iostream>
using namespace std;
#define SIZE 6

static int Q[SIZE];
int Front = -1, Rear = -1;

void initialize(){
    Front = Rear = -1;
}

bool Empty_Check(){
    if(Front == -1 && Rear == -1){return true;}
    else{return false;}
}

bool Full_Check(){
    if(Rear == SIZE - 1){return true;}
    else{return false;}
}

bool Clear_Check(){
    if(Front != -1 && Front == Rear){return true;}
    else{return false;}
}

void EnQ(int value){
    if(Empty_Check()){Front = Rear = 0; Q[Rear] = value;}
    else if(Full_Check()){cout<<"Queue is Full"<<endl;}
    else{
        Rear++;
        Q[Rear] = value;}
}

void DeQ(){
    if(Empty_Check()){cout<<"Queue is Empty!"<<endl;}
    else if(Clear_Check()){
        cout<<"The Queue is cleared!"<<endl;
        Front = Rear = -1;
    }
    else{
        cout<<"Element "<<Front + 1<<" is Dequeued!"<<endl;
        Front++;
    }
}

void reader(){
    if(Empty_Check()){cout<<"The queue is empty"<<endl;}
    else{
        cout<<"The queue is displayed as: ";
        for(int a = Front; a <= Rear; a++){cout<<Q[a]<<"\t";}
        cout<<endl;
    }
}

void Front_element(){
    if(Empty_Check()){cout<<"The Queue is empty"<<endl;}
    else{cout<<"The Front element is: "<<Q[Front]<<"\n";}
}

void tester(){
    cout<<Front<<endl;
    cout<<Rear<<endl;
}

int main(){
    EnQ(2);
    EnQ(5);
    EnQ(7);
    reader();
    Front_element();
    reader();
    EnQ(11);
    reader();
    EnQ(15);
    EnQ(17);
    reader();
    EnQ(20);
    reader();
    DeQ();
    reader();
    DeQ();
    reader();
    DeQ();
    reader();
    DeQ();
    reader();
    DeQ();
    reader();
    DeQ();
    reader();
    return 0;
}
