#include <iostream>
using namespace std;

int warmup(int a){
    a = (a % 4) + 1;
    return a;
}

int main(){
    cout<<"Enter the middle values of your ID: ";
    int a;
    cin>>a;
    cout<<"You will solve the questions from set "<<warmup(a);
    return 0;
}
