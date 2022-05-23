#include <iostream>
using namespace std;

int square(int val){
    return val*val;
}

int summation_1to10(){//fixed for 1 to 10
    int j = 0;
    for(int i = 1; i<=10; i++){j = i + j;}
    return j;
}

int square_summation_1to10(){//fixed for 1 to 10
    int j = 0;
    for(int i = 1; i<=10; i++){j = square(i) + j;}
    return j;
}

int function_4(){
    int j = 0;
    for(int i = 1; i<=5; i++){j = (square(i)+5) + j;}
    return j;
}

int function_5(){
    int j = 1;
    for(int i = 3; i<=6; i++){j = (i-2) * j;}
    return j;
}

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

void print_array(int arr[],int s){
    for(int a = 0; a < s; a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}

int main(){
    //Part 1: 5 Provided Functions to be turned into code
    cout<<square(5)<<endl;
    cout<<square(-5)<<endl;
    cout<<summation_1to10()<<endl;
    cout<<square_summation_1to10()<<endl;
    cout<<function_4()<<endl;
    cout<<function_5()<<endl;

    //Part 2: Swap by reference
    int a = 5;
    int b = 10;
    cout<<"Before swap: a ="<<a<<" b ="<<b<<endl;
    swap_references(&a, &b);
    cout<<"After swap:  a ="<<a<<" b ="<<b<<endl;

    //Part 3: Bubble Sort
    int array_1[]={5,4,3,2,1};
    int size_1 = sizeof(array_1)/sizeof(array_1[0]);
    cout<<"Array before sort: ";
    print_array(array_1,size_1);
    bubble_sort(array_1,size_1);
    cout<<"Array after sort: ";
    print_array(array_1,size_1);

    return 0;
}

