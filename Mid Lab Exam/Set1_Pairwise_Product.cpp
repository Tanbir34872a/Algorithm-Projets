#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int PairwaseProduct(int *A, int n)
{
    int product = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(i != j)
            {
                if(product < A[i] * A[j])
                {
                    product = A[i] * A[j];
                }

            }
        }
    }
    return product;
}

int PairwaseProductFast(int *A, int n){
    int index1 = 0;
    for(int i = 0; i < n - 1; i++){
        if(A[i] >= A[index1]){
            index1 = i;
        }
    }
    int index2 = 0;
    for(int i = 1; i < n - 1; i++){
        if(i != index1 && A[i] >= A[index2]){
            index2 = i;
        }
    }
    return A[index1] * A[index2];
}

int main()
{
    int k=100000;

    int *a = new int[k];

    freopen("in.txt","r",stdin);
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }


    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<PairwaseProduct(a,k)<<endl;
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
    cout<<PairwaseProductFast(a,k)<<endl;
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
