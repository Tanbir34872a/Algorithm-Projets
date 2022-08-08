#include <bits/stdc++.h>
using namespace std;

int lcs_recursive(string X, string Y, int m, int n){
	if (m == 0 || n == 0){return 0;}
	if (X[m - 1] == Y[n - 1]){return 1 + lcs_recursive(X, Y, m - 1, n - 1);}
	else{return max(lcs_recursive(X, Y, m, n - 1), lcs_recursive(X, Y, m - 1, n));}
}

int lcs_dp(string A, string B, int m, int n){
    vector<vector<int>> LCS(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if(A[i-1] == B[j-1]){
                LCS[i][j] = 1 + LCS[i - 1][j - 1];
            }
            else{LCS[i][j] = max(LCS[i - 1][j],LCS[i][j - 1]);}
        }
    }
    return LCS[m][n];
}

int main(){
    string A;
    string B;
    string line;

    ifstream infs1("dna.txt");

    while(getline(infs1,line)){
        A += line;
    }
    cout<<A<<endl<<endl<<endl<<endl;

    ifstream infs2("search_dna.txt");

    while(getline(infs2,line)){
        B += line;
    }
    cout<<B<<endl<<endl<<endl<<endl;

    int m = A.length();
    int n = B.length();

    cout<<m<<endl<<n<<endl;

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<"Length of LCS is "<<lcs_recursive(A,B,m,n)<<endl;
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
    cout<<"Length of LCS is "<<lcs_dp(A,B,m,n)<<endl;
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
