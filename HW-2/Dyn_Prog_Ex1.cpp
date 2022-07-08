#include <bits/stdc++.h>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

vector<int> fib_series;

int fib(int n){
    if(n == 0){return 0;}
    if(n <= 2){return 1;}
    return fib(n - 1) + fib(n - 2);
}

int fib_fast_looper(int n){
    if(n == 0){return 0;}
    if(n <= 2){return 1;}
    if(fib_series[n] != -1){return fib_series[n];}
    else{fib_series[n] = fib_fast_looper(n - 1) + fib_fast_looper(n - 2);
        return fib_series[n];}
}

int fib_fast(int n){
    for(int a = 0; a <= n; a++){
        fib_series.push_back(-1);
        //cout<<fib_series[a]<<endl;
        }
    return fib_fast_looper(n);
}

int main(){
    int input;
    cout<<"Write the n-th place: ";
    cin>>input;

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<"Normal Fibonacci: "<<fib(input)<<endl;
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 1st Algorithm........................*/

    auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<"Dynamic Fibonacci: "<<fib_fast(input)<<endl;
    /* .......................................  */


    /*.....................Time taken by 2nd Algorithm........................*/
    auto end2 = chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
        time_taken2 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken2 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 2nd Algorithm........................*/


    return 0;
}
