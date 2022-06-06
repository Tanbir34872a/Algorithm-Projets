#include <bits/stdc++.h>
using namespace std;

int factorial(int x){
    if(x == 0){return 1;}
    else{return x*factorial(x-1);}
}

int fib (int n) {
    if (n < 2){return 1;}
    return fib(n-1) + fib(n-2);
 }

void fibonacci(int x){
    for(int a = 0; a < x; a++){
        cout<<fib(a)<<endl;
    }
}

int gcd(int a, int b){
    if(a == b){return a;}
    else if(a > b){return gcd(a-b,b);}
    else{return gcd(a, b-a);}
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    cout<<factorial(5)<<endl;
    fibonacci(6);
    cout<<gcd(22,26)<<endl;
    cout<<lcm(22,26)<<endl;
    return 0;
}
