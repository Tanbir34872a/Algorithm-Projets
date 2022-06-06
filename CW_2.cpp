#include <bits/stdc++.h>
using namespace std;

void swap_references(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int s){
    for(int a = 0; a < s; a++){
        for(int b = 0; b < s-a; b++){
            if(arr[b]>arr[b+1]){
                // cout<<"Before swap: a ="<<arr[b]<<" b ="<<arr[b+1]<<endl;
                swap_references(&arr[b], &arr[b+1]);}
                //cout<<"After swap: a ="<<arr[b]<<" b ="<<arr[b+1]<<endl;
        }
    }
}

void selection_sort(int arr[], int s){
    for(int a = 0; a < s; a++){
        int min_index = a;
        for(int b = a; b < s; b++){
            if(arr[min_index]>arr[b+1]){min_index = b + 1;}}
        if(min_index != a){swap_references(&arr[min_index], &arr[a]);}
    }
}

void linear_search(int arr[], int s, int n){
    for(int a = 0; a < s; a++){
        if(arr[a] == n){cout<<"The value "<<n<<" does exist"<<endl; return;}
    }
    cout<<"The value "<<n<<" does not exist"<<endl;
}

void print_array(int arr[],int s){
    for(int a = 0; a < s; a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}

void number_generate(int s){
    srand(time(0));
    freopen("unsorted.csv","w",stdout);
    for(int i=0;i<10;i++){
       cout<<(rand()%100000+1)<<endl;
    }
}

void array_fill(int arr[], int s){
    freopen("unsorted.csv","r",stdin);
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }
}

void sorted_print(int arr[], int s){
    freopen("sorted.csv","w", stdout);
    for(int i = 0; i<s; i++){
            cout<<arr[i]<<endl;
    }
}

int main(){
    int n = 10;
    number_generate(n);
    int *arr = new int[n];
    array_fill(arr, n);
    print_array(arr, n);
    selection_sort(arr, n);
    sorted_print(arr,n);
    return 0;
}
