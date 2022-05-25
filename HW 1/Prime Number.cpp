#include <bits/stdc++.h>
using namespace std;

void prime_find_linear(int val){
    for(int a = 2; a < val; a++){
        if(val % a == 0){cout<<"It's not a prime number";return;}
    }
    cout<<"It's a prime number";
}

void prime_find_rooted(int val){
    for(int a = 2; a <= sqrt(val); a++){
        if(val % a == 0){cout<<"It's not a prime number";return;}
    }
    cout<<"It's a prime number";
}

int main(){
    //Comment either one of them
    //prime_find_linear(1111122851);
    prime_find_rooted(1111122851);
    return 0;
}
